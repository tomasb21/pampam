pampam 0.1.0

* Initial release of pampam, a modification of glmnet (version 4.1-9).

* Adds support for class-specific penalty factors in multinomial models.
  The `penalty.factor` argument can now be supplied as a p x K matrix
  (K = number of classes, p = number of features), allowing different
  penalties for each class-feature combination.

* This enables implementation of adaptive LASSO in the multinomial
  regression setting.

* Cox model functionality has been removed. The required changes to
  support class-specific penalty factors are not compatible with the
  Cox implementation. Users can use glmnet directly for Cox models,
  where functionality remains unchanged.

* All other functionality (Gaussian, binomial, and Poisson models,
  cross-validation, relaxed fits, and plotting/printing methods)
  is inherited unchanged from glmnet.

Notes:

pampam is derived from glmnet 4.1-9. For earlier development history,
see:
https://github.com/cran/glmnet/blob/master/NEWS.md
