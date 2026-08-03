

#' Simulated data for the glmnet vignette
#'
#' Simple simulated data, used to demonstrate the features of glmnet
#'
#' These datasets are artificial, and are used to test out some of the
#' features of glmnet.
#' @name beta_CVX
#' @aliases x y beta_CVX
#' @format Data objects used to demonstrate features in the glmnet vignette
#' @keywords datasets
#' @useDynLib pampam
#' @import methods
#' @import Matrix
#' @import foreach
#' @importFrom utils packageDescription
#' @importFrom graphics abline axis matplot points segments text par plot
#' @importFrom stats  approx  coef  median  predict  rmultinom  runif  weighted.mean family rnorm gaussian binomial glm glm.fit
#' @importFrom survival concordance Surv is.Surv
#' @importFrom grDevices rainbow
#' @importFrom Rcpp sourceCpp
#'
#' @examples
#'
#' data(QuickStartExample)
#' x <- QuickStartExample$x; y <- QuickStartExample$y
#' pampam(x, y)
#'
NULL


#' Internal glmnet functions
#'
#' @description
#' These are not intended for use by users. \code{lambda.interp} does linear
#' interpolation of the lambdas to obtain a prediction at a new point s.
#' \code{glmnet_softmax} does the classification for multinomial models.
#' \code{nonzeroCoef} determines in an efficient manner which variables are
#' nonzero in each fit. \code{jerr} prints out error messages from the C++ routines.
#' \code{plotCoef} is called by the \code{plot} method for \code{pampam}
#' objects. \code{check_dots} is used in \code{coef} and \code{predict} with
#' argument \code{exact=TRUE}, to make sure user supplies original data used to
#' fit the \code{"glmnet"} object.
#'
#' @name glmnet-internal
#' @aliases auc auc.mat cvtype cvstats cvcompute getcoef getcoef.multinomial fix.lam error.bars getmin elnet mrelnet lognet fishnet coefnorm coxnet cv.lognet cv.elnet cv.multnet cv.mrelnet cv.fishnet cv.glmnet.raw cv.relaxed.raw blend.relaxed checkgamma.relax buildPredmat buildPredmat.mrelnetlist buildPredmat.multnetlist buildPredmat.lognetlist buildPredmat.array buildPredmat.default lambda.interp nonzeroCoef glmnet_softmax getOptcv.glmnet getOptcv.relaxed jerr jerr.elnet jerr.lognet jerr.fishnet jerr.mrelnet plotCoef zeromat na.mean check_dots na_sparse_fix prepareX
#'
#' @author Trevor Hastie
#' @keywords internal
NULL





#' Penalized Adaptive Multinomial Regression Based on 'glmnet'
#'
#' 'pampam' extends 'glmnet' by allowing class-specific penalty factors for multinomial regression, enabling adaptive LASSO methods based on a feature-by-class penalty matrix.
#'
#' For multinomial models, `penalty.factor` can be supplied as a
#' \eqn{p \times K} matrix, where \eqn{p} is the number of features
#' (columns of `x`) and \eqn{K} is the number of response classes.
#' Each row corresponds to a feature and each column corresponds to a class.
#'
#' This makes it possible to apply a different penalty to every
#' feature-class coefficient, enabling adaptive LASSO approaches for
#' multinomial regression.
#'
#' Most of the Gaussian, binomial, Poisson, cross-validation, prediction,
#' plotting, and relaxed-fit functionality is inherited from `glmnet`.
#' Cox models are not included in `pampam`; use `glmnet::glmnet()` for
#' Cox regression.
#'
#' Because `pampam` retains several `glmnet` S3 class and method names,
#' loading both packages in the same R session may create ambiguity.
#' Explicit namespace calls such as `pampam::pampam()` and
#' `glmnet::glmnet()` are recommended when both are installed.
#'
#' @name pampam-package
#' @author
#' Tomás Bandeira [aut, cre],
#' based on the original glmnet implementation by `glmnet` code by Jerome Friedman, Trevor Hastie,
#' Rob Tibshirani, Balasubramanian Narasimhan, Kenneth Tay,
#' Noah Simon, Junyang Qian, and James Yang.
#'
#' @references
#' Friedman, J., Hastie, T. and Tibshirani, R. (2010).
#' Regularization Paths for Generalized Linear Models via Coordinate Descent.
#' \emph{Journal of Statistical Software}, 33(1), 1--22.
#' \doi{10.18637/jss.v033.i01}
#'
#' @keywords models regression package
#'
#' @examples
#' set.seed(1)
#' n <- 100
#' p <- 5
#' K <- 3
#'
#' x <- matrix(rnorm(n * p), nrow = n, ncol = p)
#' y <- factor(sample(seq_len(K), n, replace = TRUE))
#'
#' penalty <- matrix(runif(p * K, 0.5, 2), nrow = p, ncol = K)
#'
#' fit <- pampam(
#'   x,
#'   y,
#'   family = "multinomial",
#'   penalty.factor = penalty
#' )
#'
"_PACKAGE"