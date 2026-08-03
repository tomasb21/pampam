# pampam 0.1.0

## New features

* Initial release of `pampam`, based on `glmnet` version 4.1-9.

* Added class-specific penalty factors for multinomial models.
  `penalty.factor` may be supplied as a `p x K` matrix, where `p`
  is the number of features and `K` is the number of classes.

* This supports adaptive LASSO methods for multinomial regression.

## Changes from glmnet

* Cox model functionality is not included. Use `glmnet` for Cox models.

* Gaussian, binomial, Poisson, cross-validation, relaxed-fit, prediction,
  plotting, and printing functionality is inherited from `glmnet`.

## Upstream history

`pampam` is derived from `glmnet` version 4.1-9.