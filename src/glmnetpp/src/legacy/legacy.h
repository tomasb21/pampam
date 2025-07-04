#pragma once

#ifndef GLMNETPP_MOCK_LEGACY

extern "C" {

// WLS stuff 

void wls_(
double *alm0,
double *almc,
double *alpha,
int *m,
int *no,
int *ni,
double *x,
double *r,
double *v,
int *intr,
int *ju,
double *vp,
double *cl,
int *nx,
double *thr,
int *maxit,
double *a,
double *aint,
double *g,
int *ia,
int *iy,
int *iz,
int *mm,
int *nino,
double *rsqc,
int *nlp,
int *jerr
);

// ELNET stuff 

void elnet_(
int *ka,
double *parm,
int *no,
int *ni,
double *x,
double *y,
double *w,
int *jd,
double *vp,
double *cl,
int *ne,
int *nx,
int *nlam,
double *flmin,
double *ulam,
double *thr,
int *isd,
int *intr,
int *maxit,
int *lmu,
double *a0,
double *ca,
int *ia,
int *nin,
double *rsq,
double *alm,
int *nlp,
int *jerr
);

void spelnet_(
int *ka,
double *parm,
int *no,
int *ni,
double *x,
int *ix,
int *jx,
double *y,
double *w,
int *jd,
double *vp,
double *cl,
int *ne,
int *nx,
int *nlam,
double *flmin,
double *ulam,
double *thr,
int *isd,
int *intr,
int *maxit,
int *lmu,
double *a0,
double *ca,
int *ia,
int *nin,
double *rsq,
double *alm,
int *nlp,
int *jerr
);
void multelnet_(
double *parm,
int *no,
int *ni,
int *nr,
double *x,
double *y,
double *w,
int *jd,
double *vp,
double *cl,
int *ne,
int *nx,
int *nlam,
double *flmin,
double *ulam,
double *thr,
int *isd,
int *jsd,
int *intr,
int *maxit,
int *lmu,
double *a0,
double *ca,
int *ia,
int *nin,
double *rsq,
double *alm,
int *nlp,
int *jerr
);

void multelnet_(
double *parm,
int *no,
int *ni,
int *nr,
double *x,
double *y,
double *w,
int *jd,
double *vp,
double *cl,
int *ne,
int *nx,
int *nlam,
double *flmin,
double *ulam,
double *thr,
int *isd,
int *jsd,
int *intr,
int *maxit,
int *lmu,
double *a0,
double *ca,
int *ia,
int *nin,
double *rsq,
double *alm,
int *nlp,
int *jerr
);

void multspelnet_(
double *parm,
int *no,
int *ni,
int *nr,
double *x,
int *ix,
int *jx,
double *y,
double *w,
int *jd,
double *vp,
double *cl,
int *ne,
int *nx,
int *nlam,
double *flmin,
double *ulam,
double *thr,
int *isd,
int *jsd,
int *intr,
int *maxit,
int *lmu,
double *a0,
double *ca,
int *ia,
int *nin,
double *rsq,
double *alm,
int *nlp,
int *jerr
);

void elnet1_(
double *beta,
int *ni,
int *ju,
double *vp,
double *cl,
double *g,
int *no,
int *ne,
int *nx,
double *x,
int *nlam,
double *flmin,
double *ulam,
double *thr,
int *maxit,
double *xv,  
int *lmu,
double *ao,
int *ia,
int *kin,
double *rsqo,
double *almo,
int *nlp,
int *jerr
);

void elnet2_(
double *beta,
int *ni,
int *ju,
double *vp,
double *cl,
double *y,
int *no,
int *ne,
int *nx,
double *x,
int *nlam,
double *flmin,
double *ulam,
double *thr,
int *maxit,
double *xv,  
int *lmu,
double *ao,
int *ia,
int *kin,
double *rsqo,
double *almo,
int *nlp,
int *jerr
);

void spelnet1_(
double *beta,
int *ni,
double *g,
int *no,
double *w,
int *ne,
int *nx,
double *x,
int *ix,
int *jx,
int *ju,
double *vp,
double *cl,
int *nlam,
double *flmin,
double *ulam,
double *thr,
int *maxit,
double *xm,
double *xs,
double *xv,  
int *lmu,
double *ao,
int *ia,
int *kin,
double *rsqo,
double *almo,
int *nlp,
int *jerr
);

void spelnet2_(
double *beta,
int *ni,
double *gy,
double *w,
int *no,
int *ne,
int *nx,
double *x,
int *ix,
int *jx,
int *ju,
double *vp,
double *cl,
int *nlam,
double *flmin,
double *ulam,
double *thr,
int *maxit,
double *xm,
double *xs,
double *xv,  
int *lmu,
double *ao,
int *ia,
int *kin,
double *rsqo,
double *almo,
int *nlp,
int *jerr
);

void multelnet2_(
double *beta,
int *ni,
int *nr,
int *ju,
double *vp,
double *cl,
double *y,
int *no,
int *ne,
int *nx,
double *x,
int *nlam,
double *flmin,
double *ulam,
double *thri,
int *maxit,
double *xv,
double *ys0,
int *lmu,
double *ao,
int *ia,
int *kin,
double *rsqo,
double *almo,
int *nlp,
int *jerr
);

void multspelnet2_(
double *beta,
int *ni,
int *nr,
double *y,
double *w,
int *no,
int *ne,
int *nx,
double *x,
int *ix,
int *jx,
int *ju,
double *vp,
double *cl,
int *nlam,
double *flmin,
double *ulam,
double *thri,
int *maxit,
double *xm,
double *xs,
double *xv,
double *ys0,
int *lmu,
double *ao,
int *ia,
int *kin,
double *rsqo,
double *almo,
int *nlp,
int *jerr
);

// LOGNET stuff 

void lognet_(
double *parm,
int *no,
int *ni,
int *nc,
double *x,
double *y,
double *g,
int *jd,
double *vp,
double *mp,
double *cl,
int *ne,
int *nx,
int *nlam,
double *flmin,
double *ulam,
double *thr,
int *isd,
int *intr,
int *maxit,
int *kopt,
int *lmu,
double *a0,
double *ca,
int *ia,
int *nin,
double *dev0,
double *dev,
double *alm,
int *nlp,
int *jerr
);

void splognet_(
double *parm,
int *no,
int *ni,
int *nc,
double *x,
int *ix,
int *jx,
double *y,
double *g,
int *jd,
double *vp,
double *cl,
int *ne,
int *nx,
int *nlam,
double *flmin,
double *ulam,
double *thr,
int *isd,
int *intr,
int *maxit,
int *kopt,
int *lmu,
double *a0,
double *ca,
int *ia,
int *nin,
double *dev0,
double *dev,
double *alm,
int *nlp,
int *jerr
);

void lognet2n_(
double *parm,
int *no,
int *ni,
double *x,
double *y,
double *g,
double *w,
int *ju,
double *vp,
double *mp,
double *cl,
int *ne,
int *nx,
int *nlam,
double *flmin,
double *ulam,
double *shri,
int *isd,
int *intr,
int *maxit,
int *kopt,
int *lmu,
double *a0,
double *a,
int *m,
int *kin,
double *dev0,
double *dev,
double *alm,
int *nlp,
int *jerr
);

void sprlognet2n_(
double *parm,
int *no,
int *ni,
double *x,
int *ix,
int *jx,
double *y,
double *g,
double *w,
int *ju,
double *vp,
double *cl,
int *ne,
int *nx,
int *nlam,
double *flmin,
double *ulam,
double *shri,
int *isd,
int *intr,
int *maxit,
int *kopt,
double *xb,
double *xs,
int *lmu,
double *a0,
double *a,
int *m,
int *kin,
double *dev0,
double *dev,
double *alm,
int *nlp,
int *jerr
);

void sprlognetn_(
double *parm,
int *no,
int *ni,
int *nc,
double *x,
int *ix,
int *jx,
double *y,
double *g,
double *w,
int *ju,
double *vp,
double *cl,
int *ne,
int *nx,
int *nlam,
double *flmin,
double *ulam,
double *shri,
int *isd,
int *intr,
int *maxit,
int *kopt,
double *xb,
double *xs,
int *lmu,
double *a0,
double *a,
int *m,
int *kin,
double *dev0,
double *dev,
double *alm,
int *nlp,
int *jerr
);

void lognetn_(
double *parm,
int *no,
int *ni,
int *nc,
double *x,
double *y,
double *g,
double *w,
int *ju,
double *vp,
double *mp,
double *cl,
int *ne,
int *nx,
int *nlam,
double *flmin,
double *ulam,
double *shri,
int *isd,
int *intr,
int *maxit,
int *kopt,
int *lmu,
double *a0,
double *a,
int *m,
int *kin,
double *dev0,
double *dev,
double *alm,
int *nlp,
int *jerr
);

void multlognetn_(
double *parm,
int *no,
int *ni,
int *nc,
double *x,
double *y,
double *g,
double *w,
int *ju,
double *vp,
double *mp,
double *cl,
int *ne,
int *nx,
int *nlam,
double *flmin,
double *ulam,
double *shri,
int *intr,
int *maxit,
double *xv,
int *lmu,
double *a0,
double *a,
int *m,
int *kin,
double *dev0,
double *dev,
double *alm,
int *nlp,
int *jerr
);

void multsprlognetn_(
double *parm,
int *no,
int *ni,
int *nc,
double *x,
int *ix,
int *jx,
double *y,
double *g,
double *w,
int *ju,
double *vp,
double *cl,
int *ne,
int *nx,
int *nlam,
double *flmin,
double *ulam,
double *shri,
int *intr,
int *maxit,
double *xv,
double *xb,
double *xs,
int *lmu,
double *a0,
double *a,
int *m,
int *kin,
double *dev0,
double *dev,
double *alm,
int *nlp,
int *jerr
);

/* Fishnet stuff */

void fishnet_(
double *parm,
int *no,
int *ni,
double *x,
double *y,
double *g,
double *w,
int *jd,
double *vp,
double *cl,
int *ne,
int *nx,
int *nlam,
double *flmin,
double *ulam,
double *thr,
int *isd,
int *intr,
int *maxit,
int *lmu,
double *a0,
double *ca,
int *ia,
int *kin,
double *dev0,
double *dev,
double *alm,
int *nlp,
int *jerr
);

void spfishnet_(
double *parm,
int *no,
int *ni,
double *x,
int *ix,
int *jx,
double *y,
double *g,
double *w,
int *jd,
double *vp,
double *cl,
int *ne,
int *nx,
int *nlam,
double *flmin,
double *ulam,
double *thr,
int *isd,
int *intr,
int *maxit,
int *lmu,
double *a0,
double *ca,
int *ia,
int *kin,
double *dev0,
double *dev,
double *alm,
int *nlp,
int *jerr
);

void fishnet1_(
double *parm,
int *no,
int *ni,
double *x,
double *y,
double *g,
double *q,
int *ju,
double *vp,
double *cl,
int *ne,
int *nx,
int *nlam,
double *flmin,
double *ulam,
double *shri,
int *isd,
int *intr,
int *maxit,
int *lmu,
double *a0,
double *ca,
int *m,
int *kin,
double *dev0,
double *dev,
double *alm,
int *nlp,
int *jerr
);

void spfishnet1_(
double *parm,
int *no,
int *ni,
double *x,
int *ix,
int *jx,
double *y,
double *g,
double *q,
int *ju,
double *vp,
double *cl,
int *ne,
int *nx,
int *nlam,
double *flmin,
double *ulam,
double *shri,
int *isd,
int *intr,
int *maxit,
double *xb,
double *xs,
int *lmu,
double *a0,
double *ca,
int *m,
int *kin,
double *dev0,
double *dev,
double *alm,
int *nlp,
int *jerr
);

/* Other stuff */

void standard_(
int *no,
int *ni,
double *x,
double *y,
double *w,
int *isd,
int *intr,
int *ju,
double *g,
double *xm,
double *xs,
double *ym,
double *ys,
double *xv,
int *jerr
);

void standard1_(
int *no,
int *ni,
double *x,
double *y,
double *w,
int *isd,
int *intr,
int *ju,
double *xm,
double *xs,
double *ym,
double *ys,
double *xv,
int *jerr
);

void multstandard1_(
int *no,
int *ni,
int *nr,
double *x,
double *y,
double *w,
int *isd,
int *jsd,
int *intr,
int *ju,
double *xm,
double *xs,
double *ym,
double *ys,
double *xv,
double *ys0,
int *jerr
);

void spstandard_(
int *no,
int *ni,
double *x,
int *ix,
int *jx,
double *y,
double *w,
int *ju,
int *isd,
int *intr,
double *g,
double *xm,
double *xs,
double *ym,
double *ys,
double *xv,
int *jerr
);

void spstandard1_(
int *no,
int *ni,
double *x,
int *ix,
int *jx,
double *y,
double *w,
int *ju,
int *isd,
int *intr,
double *xm,
double *xs,
double *ym,
double *ys,
double *xv,
int *jerr
);

void multspstandard1_(
int *no,
int *ni,
int *nr,
double *x,
int *ix,
int *jx,
double *y,
double *w,
int *ju,
int *isd,
int *jsd,
int *intr,
double *xm,
double *xs,
double *ym,
double *ys,
double *xv,
double *ys0,
int *jerr
);

void lstandard1_(
int *no,
int *ni,
double *x,
double *w,
int *ju,
int *isd,
int *intr,
double *xm,
double *xs
);

void multlstandard1_(
int *no,
int *ni,
double *x,
double *w,
int *ju,
int *isd,
int *intr,
double *xm,
double *xs,
double *xv
);

void splstandard2_(
int *no,
int *ni,
double *x,
int *ix,
int *jx,
double *w,
int *ju,
int *isd,
int *intr,
double *xm,
double *xs
);

void multsplstandard2_(
int *no,
int *ni,
double *x,
int *ix,
int *jx,
double *w,
int *ju,
int *isd,
int *intr,
double *xm,
double *xs,
double *xv
);

void chkvars_(
int *no,
int *ni,
double *x,
int *ju
);

void spchkvars_(
int *no,
int *ni,
double *x,
int *ix,
int *ju
);

void get_int_parms_(
double *sml,
double *eps,
double *big,
int *mnlam,
double *rsqmax,
double *pmin,
double *exmx,
int *itrace
);

void chg_fract_dev_(
double *fdev
);

void chg_dev_max_(
double *devmax
);

void chg_min_flmin_(
double *eps
);

void chg_big_(
double *big
);

void chg_min_lambdas_(
int *mnlam
);

void chg_min_null_prob_(
double *pmin
);

void chg_max_exp_(
double *exmx
);

void chg_itrace_(
int *itrace
);

/* void chg_bnorm_( */
/* double *prec, */
/* int *mxit */
/* ); */

void chg_epsnr_(
double *epsnr
);
 
void chg_mxitnr_(
int *mxitnr
);
 
void setpb_(
int *val
);

void get_int_parms_(
double* sml,
double* eps,
double* big,
int* mnlam,
double* rsqmax,
double* pmin,
double* exmx,
int* itrace
);

} // end extern "C"

#else

inline void setpb_(int *m) {}
inline void elnet1_(
    double* beta,
    int* ni,
    int* ju,
    double* vp,
    double* cl,
    double* g,
    int* no,
    int* ne,
    int* nx,
    double* x,
    int* nlam,
    double* flmin,
    double* ulam,
    double* thr,
    int* maxit,
    double* xv,
    int* lmu,
    double* ao,
    int* ia,
    int* kin,
    double* rsqo,
    double* almo,
    int* nlp,
    int* jerr
) {}

inline void elnet2_(
    double* beta,
    int* ni,
    int* ju,
    double* vp,
    double* cl,
    double* y,
    int* no,
    int* ne,
    int* nx,
    double* x,
    int* nlam,
    double* flmin,
    double* ulam,
    double* thr,
    int* maxit,
    double* xv,
    int* lmu,
    double* ao,
    int* ia,
    int* kin,
    double* rsqo,
    double* almo,
    int* nlp,
    int* jerr
) {}

inline void elnet_(
    int* ka,
    double* beta,
    int* no,
    int* ni,
    double* x,
    double* y,
    double* w,
    int* ju,
    double* vp,
    double* cl,
    int* ne,
    int* nx,
    int* nlam,
    double* flmin,
    double* ulam,
    double* thr,
    int* isd,
    int* intr,
    int* maxit,
    int* lmu,
    double* a0,
    double* ca,
    int* ia,
    int* nin,
    double* rsq,
    double* alm,
    int* nlp,
    int* jerr
) {}

inline void spelnet_(
    int* ka,
    double* beta,
    int* no,
    int* ni,
    double* x,
    int* ix,
    int* jx,
    double* y,
    double* w,
    int* ju,
    double* vp,
    double* cl,
    int* ne,
    int* nx,
    int* nlam,
    double* flmin,
    double* ulam,
    double* thr,
    int* isd,
    int* intr,
    int* maxit,
    int* lmu,
    double* a0,
    double* ca,
    int* ia,
    int* nin,
    double* rsq,
    double* alm,
    int* nlp,
    int* jerr
) {}

void lognet_(
double* parm,
int* no,
int* ni,
int* nc,
double* x,
double* y,
double* g,
int* jd,
double* vp,
double* cl,
int* ne,
int* nx,
int* nlam,
double* flmin,
double* ulam,
double* thr,
int* isd,
int* intr,
int* maxit,
int* kopt,
int* lmu,
double* a0,
double* ca,
int* ia,
int* nin,
double* dev0,
double* dev,
double* alm,
int* nlp,
int* jerr
) {};

void splognet_(
double* parm,
int* no,
int* ni,
int* nc,
double* x,
int* ix,
int* jx,
double* y,
double* g,
int* jd,
double* vp,
double* cl,
int* ne,
int* nx,
int* nlam,
double* flmin,
double* ulam,
double* thr,
int* isd,
int* intr,
int* maxit,
int* kopt,
int* lmu,
double* a0,
double* ca,
int* ia,
int* nin,
double* dev0,
double* dev,
double* alm,
int* nlp,
int* jerr
) {};

void fishnet_(
double* parm,
int* no,
int* ni,
double* x,
double* y,
double* g,
double* w,
int* jd,
double* vp,
double* cl,
int* ne,
int* nx,
int* nlam,
double* flmin,
double* ulam,
double* thr,
int* isd,
int* intr,
int* maxit,
int* lmu,
double* a0,
double* ca,
int* ia,
int* kin,
double* dev0,
double* dev,
double* alm,
int* nlp,
int* jerr
) {};

void spfishnet_(
double* parm,
int* no,
int* ni,
double* x,
int* ix,
int* jx,
double* y,
double* g,
double* w,
int* jd,
double* vp,
double* cl,
int* ne,
int* nx,
int* nlam,
double* flmin,
double* ulam,
double* thr,
int* isd,
int* intr,
int* maxit,
int* lmu,
double* a0,
double* ca,
int* ia,
int* kin,
double* dev0,
double* dev,
double* alm,
int* nlp,
int* jerr
) {};

#endif
