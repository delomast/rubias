// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_close_matchers
List rcpp_close_matchers(List par_list, double non_miss_fract, double match_fract);
RcppExport SEXP _rubiasTD_rcpp_close_matchers(SEXP par_listSEXP, SEXP non_miss_fractSEXP, SEXP match_fractSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type par_list(par_listSEXP);
    Rcpp::traits::input_parameter< double >::type non_miss_fract(non_miss_fractSEXP);
    Rcpp::traits::input_parameter< double >::type match_fract(match_fractSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_close_matchers(par_list, non_miss_fract, match_fract));
    return rcpp_result_gen;
END_RCPP
}
// gsi_mcmc_fb
List gsi_mcmc_fb(List par_list, NumericVector Pi_init, NumericVector lambda, int reps, int burn_in, int sample_int_Pi, int sample_int_PofZ);
RcppExport SEXP _rubiasTD_gsi_mcmc_fb(SEXP par_listSEXP, SEXP Pi_initSEXP, SEXP lambdaSEXP, SEXP repsSEXP, SEXP burn_inSEXP, SEXP sample_int_PiSEXP, SEXP sample_int_PofZSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type par_list(par_listSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Pi_init(Pi_initSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< int >::type reps(repsSEXP);
    Rcpp::traits::input_parameter< int >::type burn_in(burn_inSEXP);
    Rcpp::traits::input_parameter< int >::type sample_int_Pi(sample_int_PiSEXP);
    Rcpp::traits::input_parameter< int >::type sample_int_PofZ(sample_int_PofZSEXP);
    rcpp_result_gen = Rcpp::wrap(gsi_mcmc_fb(par_list, Pi_init, lambda, reps, burn_in, sample_int_Pi, sample_int_PofZ));
    return rcpp_result_gen;
END_RCPP
}
// geno_logL
NumericMatrix geno_logL(List par_list);
RcppExport SEXP _rubiasTD_geno_logL(SEXP par_listSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type par_list(par_listSEXP);
    rcpp_result_gen = Rcpp::wrap(geno_logL(par_list));
    return rcpp_result_gen;
END_RCPP
}
// geno_logL_ssq
NumericMatrix geno_logL_ssq(List par_list);
RcppExport SEXP _rubiasTD_geno_logL_ssq(SEXP par_listSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type par_list(par_listSEXP);
    rcpp_result_gen = Rcpp::wrap(geno_logL_ssq(par_list));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_indiv_specific_logl_means_and_vars
List rcpp_indiv_specific_logl_means_and_vars(List par_list, List MV);
RcppExport SEXP _rubiasTD_rcpp_indiv_specific_logl_means_and_vars(SEXP par_listSEXP, SEXP MVSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type par_list(par_listSEXP);
    Rcpp::traits::input_parameter< List >::type MV(MVSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_indiv_specific_logl_means_and_vars(par_list, MV));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_per_locus_logls
NumericMatrix rcpp_per_locus_logls(List par_list);
RcppExport SEXP _rubiasTD_rcpp_per_locus_logls(SEXP par_listSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type par_list(par_listSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_per_locus_logls(par_list));
    return rcpp_result_gen;
END_RCPP
}
// samp_from_mat
IntegerVector samp_from_mat(NumericMatrix M);
RcppExport SEXP _rubiasTD_samp_from_mat(SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type M(MSEXP);
    rcpp_result_gen = Rcpp::wrap(samp_from_mat(M));
    return rcpp_result_gen;
END_RCPP
}
// gprob_sim_gc
NumericMatrix gprob_sim_gc(List par_list, IntegerVector sim_colls);
RcppExport SEXP _rubiasTD_gprob_sim_gc(SEXP par_listSEXP, SEXP sim_collsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type par_list(par_listSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type sim_colls(sim_collsSEXP);
    rcpp_result_gen = Rcpp::wrap(gprob_sim_gc(par_list, sim_colls));
    return rcpp_result_gen;
END_RCPP
}
// gprob_sim_ind
NumericMatrix gprob_sim_ind(List par_list, IntegerVector sim_colls);
RcppExport SEXP _rubiasTD_gprob_sim_ind(SEXP par_listSEXP, SEXP sim_collsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type par_list(par_listSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type sim_colls(sim_collsSEXP);
    rcpp_result_gen = Rcpp::wrap(gprob_sim_ind(par_list, sim_colls));
    return rcpp_result_gen;
END_RCPP
}
// gprob_sim_gc_missing
NumericMatrix gprob_sim_gc_missing(List par_list, IntegerVector sim_colls, IntegerVector sim_missing);
RcppExport SEXP _rubiasTD_gprob_sim_gc_missing(SEXP par_listSEXP, SEXP sim_collsSEXP, SEXP sim_missingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type par_list(par_listSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type sim_colls(sim_collsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type sim_missing(sim_missingSEXP);
    rcpp_result_gen = Rcpp::wrap(gprob_sim_gc_missing(par_list, sim_colls, sim_missing));
    return rcpp_result_gen;
END_RCPP
}
// gsi_em_1
List gsi_em_1(NumericMatrix SL, NumericVector Pi_init, int max_iterations, double tolerance, bool return_progression);
RcppExport SEXP _rubiasTD_gsi_em_1(SEXP SLSEXP, SEXP Pi_initSEXP, SEXP max_iterationsSEXP, SEXP toleranceSEXP, SEXP return_progressionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type SL(SLSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Pi_init(Pi_initSEXP);
    Rcpp::traits::input_parameter< int >::type max_iterations(max_iterationsSEXP);
    Rcpp::traits::input_parameter< double >::type tolerance(toleranceSEXP);
    Rcpp::traits::input_parameter< bool >::type return_progression(return_progressionSEXP);
    rcpp_result_gen = Rcpp::wrap(gsi_em_1(SL, Pi_init, max_iterations, tolerance, return_progression));
    return rcpp_result_gen;
END_RCPP
}
// gsi_mcmc_1
List gsi_mcmc_1(NumericMatrix SL, NumericVector Pi_init, NumericVector lambda, int reps, int burn_in, int sample_int_Pi, int sample_int_PofZ, bool save_z);
RcppExport SEXP _rubiasTD_gsi_mcmc_1(SEXP SLSEXP, SEXP Pi_initSEXP, SEXP lambdaSEXP, SEXP repsSEXP, SEXP burn_inSEXP, SEXP sample_int_PiSEXP, SEXP sample_int_PofZSEXP, SEXP save_zSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type SL(SLSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Pi_init(Pi_initSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< int >::type reps(repsSEXP);
    Rcpp::traits::input_parameter< int >::type burn_in(burn_inSEXP);
    Rcpp::traits::input_parameter< int >::type sample_int_Pi(sample_int_PiSEXP);
    Rcpp::traits::input_parameter< int >::type sample_int_PofZ(sample_int_PofZSEXP);
    Rcpp::traits::input_parameter< bool >::type save_z(save_zSEXP);
    rcpp_result_gen = Rcpp::wrap(gsi_mcmc_1(SL, Pi_init, lambda, reps, burn_in, sample_int_Pi, sample_int_PofZ, save_z));
    return rcpp_result_gen;
END_RCPP
}
// dirch_from_allocations
NumericVector dirch_from_allocations(IntegerVector C, NumericVector lambda);
RcppExport SEXP _rubiasTD_dirch_from_allocations(SEXP CSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type C(CSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(dirch_from_allocations(C, lambda));
    return rcpp_result_gen;
END_RCPP
}
// dirch_from_counts
NumericVector dirch_from_counts(IntegerVector C, NumericVector lambda);
RcppExport SEXP _rubiasTD_dirch_from_counts(SEXP CSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type C(CSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(dirch_from_counts(C, lambda));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rubiasTD_rcpp_close_matchers", (DL_FUNC) &_rubiasTD_rcpp_close_matchers, 3},
    {"_rubiasTD_gsi_mcmc_fb", (DL_FUNC) &_rubiasTD_gsi_mcmc_fb, 7},
    {"_rubiasTD_geno_logL", (DL_FUNC) &_rubiasTD_geno_logL, 1},
    {"_rubiasTD_geno_logL_ssq", (DL_FUNC) &_rubiasTD_geno_logL_ssq, 1},
    {"_rubiasTD_rcpp_indiv_specific_logl_means_and_vars", (DL_FUNC) &_rubiasTD_rcpp_indiv_specific_logl_means_and_vars, 2},
    {"_rubiasTD_rcpp_per_locus_logls", (DL_FUNC) &_rubiasTD_rcpp_per_locus_logls, 1},
    {"_rubiasTD_samp_from_mat", (DL_FUNC) &_rubiasTD_samp_from_mat, 1},
    {"_rubiasTD_gprob_sim_gc", (DL_FUNC) &_rubiasTD_gprob_sim_gc, 2},
    {"_rubiasTD_gprob_sim_ind", (DL_FUNC) &_rubiasTD_gprob_sim_ind, 2},
    {"_rubiasTD_gprob_sim_gc_missing", (DL_FUNC) &_rubiasTD_gprob_sim_gc_missing, 3},
    {"_rubiasTD_gsi_em_1", (DL_FUNC) &_rubiasTD_gsi_em_1, 5},
    {"_rubiasTD_gsi_mcmc_1", (DL_FUNC) &_rubiasTD_gsi_mcmc_1, 8},
    {"_rubiasTD_dirch_from_allocations", (DL_FUNC) &_rubiasTD_dirch_from_allocations, 2},
    {"_rubiasTD_dirch_from_counts", (DL_FUNC) &_rubiasTD_dirch_from_counts, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_rubiasTD(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
