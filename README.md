# pampam

`pampam` is a fork of `glmnet` that extends multinomial models to support
class-specific penalty factors, enabling adaptive LASSO in the
multinomial setting.

## Relationship to glmnet

This package is derived from `glmnet` (Friedman, Hastie, Tibshirani, and
others), licensed under GPL-2. The core elastic-net fitting engine, S3
class system, and most user-facing functions are unchanged from `glmnet`.

The main modification is in how `penalty.factor` is specified for
multinomial models. `glmnet` takes a single vector of length `p` (one
weight per feature), applied the same way across all classes. `pampam`
instead accepts a `p × K` matrix, where `K` is the number of classes
(levels of the response) and `p` is the number of features (columns of
`x`), so each class can have its own set of feature-level penalty
weights.

Internally, the multinomial fitting routines were modified to accept
and apply a per-class penalty matrix instead of a shared vector.

## Differences from glmnet

- Multinomial models support class-specific penalty factors via a `p × K` matrix.
- Cox models are not included in `pampam`. For Cox regression, use `glmnet::glmnet()`, where functionality is unchanged.

**Note:** `pampam` and `glmnet` share several function and method names
(e.g. `predict.glmnet`, `plot.glmnet`, `cv.glmnet`). To avoid ambiguity,
we recommend calling functions explicitly:

```r
glmnet::glmnet(...)
pampam::pampam(...)
```

## Installation

```r
# install.packages("devtools")
devtools::install_github("tomasb21/pampam")
```

## Usage

```r
library(pampam)

set.seed(1)
x <- matrix(rnorm(100 * 5), 100, 5)
y <- sample(1:3, 100, replace = TRUE)

K <- length(unique(y))  # number of classes
p <- ncol(x)            # number of features

pf <- matrix(runif(K * p, 0.5, 2), p, K)

fit <- pampam(
  x, y,
  family = "multinomial",
  penalty.factor = pf
)
```

## Credits

Original `glmnet` authors: Jerome Friedman, Trevor Hastie, Rob Tibshirani,
Balasubramanian Narasimhan, Kenneth Tay, Noah Simon, James Yang, Junyang Qian.

## License

GPL-2, inherited from `glmnet`.