// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// Matcher
List Matcher(int Ncontrols, int Tcontrols, int Ncases, NumericVector endFollowUp, NumericVector caseIndex, NumericVector controls, NumericVector cases, int Ndateterms, NumericMatrix datescases, NumericMatrix datescontrols, int Ndurationterms, NumericMatrix durationcases, NumericMatrix durationcontrols, NumericVector durationMin);
RcppExport SEXP _heaven_Matcher(SEXP NcontrolsSEXP, SEXP TcontrolsSEXP, SEXP NcasesSEXP, SEXP endFollowUpSEXP, SEXP caseIndexSEXP, SEXP controlsSEXP, SEXP casesSEXP, SEXP NdatetermsSEXP, SEXP datescasesSEXP, SEXP datescontrolsSEXP, SEXP NdurationtermsSEXP, SEXP durationcasesSEXP, SEXP durationcontrolsSEXP, SEXP durationMinSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type Ncontrols(NcontrolsSEXP);
    Rcpp::traits::input_parameter< int >::type Tcontrols(TcontrolsSEXP);
    Rcpp::traits::input_parameter< int >::type Ncases(NcasesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type endFollowUp(endFollowUpSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type caseIndex(caseIndexSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type controls(controlsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type cases(casesSEXP);
    Rcpp::traits::input_parameter< int >::type Ndateterms(NdatetermsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type datescases(datescasesSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type datescontrols(datescontrolsSEXP);
    Rcpp::traits::input_parameter< int >::type Ndurationterms(NdurationtermsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type durationcases(durationcasesSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type durationcontrols(durationcontrolsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type durationMin(durationMinSEXP);
    rcpp_result_gen = Rcpp::wrap(Matcher(Ncontrols, Tcontrols, Ncases, endFollowUp, caseIndex, controls, cases, Ndateterms, datescases, datescontrols, Ndurationterms, durationcases, durationcontrols, durationMin));
    return rcpp_result_gen;
END_RCPP
}
// daysnonhosp
Rcpp::NumericVector daysnonhosp(Rcpp::NumericVector id, Rcpp::NumericVector pdate, Rcpp::NumericVector iddates, Rcpp::NumericVector inddto, Rcpp::NumericVector uddto);
RcppExport SEXP _heaven_daysnonhosp(SEXP idSEXP, SEXP pdateSEXP, SEXP iddatesSEXP, SEXP inddtoSEXP, SEXP uddtoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type id(idSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type pdate(pdateSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type iddates(iddatesSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type inddto(inddtoSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type uddto(uddtoSEXP);
    rcpp_result_gen = Rcpp::wrap(daysnonhosp(id, pdate, iddates, inddto, uddto));
    return rcpp_result_gen;
END_RCPP
}
// innerMedicinMacro
Rcpp::List innerMedicinMacro(Rcpp::DataFrame dat, Rcpp::DataFrame admdat, Rcpp::List doses, NumericVector idunique, Rcpp::DataFrame index, double prescriptionwindow, double maxdepot, double verbose);
RcppExport SEXP _heaven_innerMedicinMacro(SEXP datSEXP, SEXP admdatSEXP, SEXP dosesSEXP, SEXP iduniqueSEXP, SEXP indexSEXP, SEXP prescriptionwindowSEXP, SEXP maxdepotSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type dat(datSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type admdat(admdatSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type doses(dosesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type idunique(iduniqueSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type index(indexSEXP);
    Rcpp::traits::input_parameter< double >::type prescriptionwindow(prescriptionwindowSEXP);
    Rcpp::traits::input_parameter< double >::type maxdepot(maxdepotSEXP);
    Rcpp::traits::input_parameter< double >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(innerMedicinMacro(dat, admdat, doses, idunique, index, prescriptionwindow, maxdepot, verbose));
    return rcpp_result_gen;
END_RCPP
}
// na_locf
IntegerVector na_locf(IntegerVector x);
RcppExport SEXP _heaven_na_locf(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(na_locf(x));
    return rcpp_result_gen;
END_RCPP
}
// nccSamplingCpp
DataFrame nccSamplingCpp(arma::vec pnr, arma::vec time, arma::vec status, arma::vec Tstart, arma::vec exposureWindow, int Ncontrols);
RcppExport SEXP _heaven_nccSamplingCpp(SEXP pnrSEXP, SEXP timeSEXP, SEXP statusSEXP, SEXP TstartSEXP, SEXP exposureWindowSEXP, SEXP NcontrolsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type pnr(pnrSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type time(timeSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type status(statusSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Tstart(TstartSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type exposureWindow(exposureWindowSEXP);
    Rcpp::traits::input_parameter< int >::type Ncontrols(NcontrolsSEXP);
    rcpp_result_gen = Rcpp::wrap(nccSamplingCpp(pnr, time, status, Tstart, exposureWindow, Ncontrols));
    return rcpp_result_gen;
END_RCPP
}
// split2
List split2(IntegerVector pnrnum, NumericVector inn, NumericVector out, IntegerVector event, IntegerVector mergevar, NumericMatrix split, int numcov);
RcppExport SEXP _heaven_split2(SEXP pnrnumSEXP, SEXP innSEXP, SEXP outSEXP, SEXP eventSEXP, SEXP mergevarSEXP, SEXP splitSEXP, SEXP numcovSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type pnrnum(pnrnumSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type inn(innSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type out(outSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type event(eventSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type mergevar(mergevarSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type split(splitSEXP);
    Rcpp::traits::input_parameter< int >::type numcov(numcovSEXP);
    rcpp_result_gen = Rcpp::wrap(split2(pnrnum, inn, out, event, mergevar, split, numcov));
    return rcpp_result_gen;
END_RCPP
}
// splitDate
List splitDate(NumericVector inn, NumericVector out, IntegerVector event, IntegerVector mergevar, IntegerVector seq, IntegerVector varname);
RcppExport SEXP _heaven_splitDate(SEXP innSEXP, SEXP outSEXP, SEXP eventSEXP, SEXP mergevarSEXP, SEXP seqSEXP, SEXP varnameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type inn(innSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type out(outSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type event(eventSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type mergevar(mergevarSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type seq(seqSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type varname(varnameSEXP);
    rcpp_result_gen = Rcpp::wrap(splitDate(inn, out, event, mergevar, seq, varname));
    return rcpp_result_gen;
END_RCPP
}
// splitFT
List splitFT(IntegerVector pnrnum, NumericVector inn, NumericVector out, IntegerVector event, IntegerVector mergevar, IntegerVector Spnrnum, std::vector<std::string> val, NumericVector start, NumericVector end, IntegerVector num, int numcov, String default_);
RcppExport SEXP _heaven_splitFT(SEXP pnrnumSEXP, SEXP innSEXP, SEXP outSEXP, SEXP eventSEXP, SEXP mergevarSEXP, SEXP SpnrnumSEXP, SEXP valSEXP, SEXP startSEXP, SEXP endSEXP, SEXP numSEXP, SEXP numcovSEXP, SEXP default_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type pnrnum(pnrnumSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type inn(innSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type out(outSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type event(eventSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type mergevar(mergevarSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type Spnrnum(SpnrnumSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type val(valSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type start(startSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type end(endSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type num(numSEXP);
    Rcpp::traits::input_parameter< int >::type numcov(numcovSEXP);
    Rcpp::traits::input_parameter< String >::type default_(default_SEXP);
    rcpp_result_gen = Rcpp::wrap(splitFT(pnrnum, inn, out, event, mergevar, Spnrnum, val, start, end, num, numcov, default_));
    return rcpp_result_gen;
END_RCPP
}
// vectorSearch
List vectorSearch(std::vector<int> pnrnum, std::vector<std::string> searchCols, std::vector<std::string> conditions, std::vector<std::string> exclusions, std::vector<std::string> condnames, std::vector<std::string> exclnames, int ni, int ilength, int ne, int elength, int datarows, int match);
RcppExport SEXP _heaven_vectorSearch(SEXP pnrnumSEXP, SEXP searchColsSEXP, SEXP conditionsSEXP, SEXP exclusionsSEXP, SEXP condnamesSEXP, SEXP exclnamesSEXP, SEXP niSEXP, SEXP ilengthSEXP, SEXP neSEXP, SEXP elengthSEXP, SEXP datarowsSEXP, SEXP matchSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<int> >::type pnrnum(pnrnumSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type searchCols(searchColsSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type conditions(conditionsSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type exclusions(exclusionsSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type condnames(condnamesSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type exclnames(exclnamesSEXP);
    Rcpp::traits::input_parameter< int >::type ni(niSEXP);
    Rcpp::traits::input_parameter< int >::type ilength(ilengthSEXP);
    Rcpp::traits::input_parameter< int >::type ne(neSEXP);
    Rcpp::traits::input_parameter< int >::type elength(elengthSEXP);
    Rcpp::traits::input_parameter< int >::type datarows(datarowsSEXP);
    Rcpp::traits::input_parameter< int >::type match(matchSEXP);
    rcpp_result_gen = Rcpp::wrap(vectorSearch(pnrnum, searchCols, conditions, exclusions, condnames, exclnames, ni, ilength, ne, elength, datarows, match));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_heaven_Matcher", (DL_FUNC) &_heaven_Matcher, 14},
    {"_heaven_daysnonhosp", (DL_FUNC) &_heaven_daysnonhosp, 5},
    {"_heaven_innerMedicinMacro", (DL_FUNC) &_heaven_innerMedicinMacro, 8},
    {"_heaven_na_locf", (DL_FUNC) &_heaven_na_locf, 1},
    {"_heaven_nccSamplingCpp", (DL_FUNC) &_heaven_nccSamplingCpp, 6},
    {"_heaven_split2", (DL_FUNC) &_heaven_split2, 7},
    {"_heaven_splitDate", (DL_FUNC) &_heaven_splitDate, 6},
    {"_heaven_splitFT", (DL_FUNC) &_heaven_splitFT, 12},
    {"_heaven_vectorSearch", (DL_FUNC) &_heaven_vectorSearch, 12},
    {NULL, NULL, 0}
};

RcppExport void R_init_heaven(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
