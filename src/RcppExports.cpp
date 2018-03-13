// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// RunUMISampling
Eigen::SparseMatrix<double> RunUMISampling(Eigen::SparseMatrix<double> data, int sample_val, bool upsample, bool display_progress);
RcppExport SEXP _Seurat_RunUMISampling(SEXP dataSEXP, SEXP sample_valSEXP, SEXP upsampleSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type sample_val(sample_valSEXP);
    Rcpp::traits::input_parameter< bool >::type upsample(upsampleSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(RunUMISampling(data, sample_val, upsample, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// RunUMISamplingPerCell
Eigen::SparseMatrix<double> RunUMISamplingPerCell(Eigen::SparseMatrix<double> data, NumericVector sample_val, bool upsample, bool display_progress);
RcppExport SEXP _Seurat_RunUMISamplingPerCell(SEXP dataSEXP, SEXP sample_valSEXP, SEXP upsampleSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sample_val(sample_valSEXP);
    Rcpp::traits::input_parameter< bool >::type upsample(upsampleSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(RunUMISamplingPerCell(data, sample_val, upsample, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// RowMergeMatrices
Eigen::SparseMatrix<double> RowMergeMatrices(Eigen::SparseMatrix<double, Eigen::RowMajor> mat1, Eigen::SparseMatrix<double, Eigen::RowMajor> mat2, std::vector< std::string > mat1_rownames, std::vector< std::string > mat2_rownames, std::vector< std::string > all_rownames);
RcppExport SEXP _Seurat_RowMergeMatrices(SEXP mat1SEXP, SEXP mat2SEXP, SEXP mat1_rownamesSEXP, SEXP mat2_rownamesSEXP, SEXP all_rownamesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double, Eigen::RowMajor> >::type mat1(mat1SEXP);
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double, Eigen::RowMajor> >::type mat2(mat2SEXP);
    Rcpp::traits::input_parameter< std::vector< std::string > >::type mat1_rownames(mat1_rownamesSEXP);
    Rcpp::traits::input_parameter< std::vector< std::string > >::type mat2_rownames(mat2_rownamesSEXP);
    Rcpp::traits::input_parameter< std::vector< std::string > >::type all_rownames(all_rownamesSEXP);
    rcpp_result_gen = Rcpp::wrap(RowMergeMatrices(mat1, mat2, mat1_rownames, mat2_rownames, all_rownames));
    return rcpp_result_gen;
END_RCPP
}
// LogNorm
Eigen::SparseMatrix<double> LogNorm(Eigen::SparseMatrix<double> data, int scale_factor, bool display_progress);
RcppExport SEXP _Seurat_LogNorm(SEXP dataSEXP, SEXP scale_factorSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type scale_factor(scale_factorSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(LogNorm(data, scale_factor, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// FastMatMult
Eigen::MatrixXd FastMatMult(Eigen::MatrixXd m1, Eigen::MatrixXd m2);
RcppExport SEXP _Seurat_FastMatMult(SEXP m1SEXP, SEXP m2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type m1(m1SEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type m2(m2SEXP);
    rcpp_result_gen = Rcpp::wrap(FastMatMult(m1, m2));
    return rcpp_result_gen;
END_RCPP
}
// FastRowScale
Eigen::MatrixXd FastRowScale(Eigen::MatrixXd mat, bool scale, bool center, double scale_max, bool display_progress);
RcppExport SEXP _Seurat_FastRowScale(SEXP matSEXP, SEXP scaleSEXP, SEXP centerSEXP, SEXP scale_maxSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type mat(matSEXP);
    Rcpp::traits::input_parameter< bool >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< bool >::type center(centerSEXP);
    Rcpp::traits::input_parameter< double >::type scale_max(scale_maxSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(FastRowScale(mat, scale, center, scale_max, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// Standardize
Eigen::MatrixXd Standardize(Eigen::MatrixXd mat, bool display_progress);
RcppExport SEXP _Seurat_Standardize(SEXP matSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type mat(matSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(Standardize(mat, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// FastSparseRowScale
Eigen::MatrixXd FastSparseRowScale(Eigen::SparseMatrix<double> mat, bool scale, bool center, double scale_max, bool display_progress);
RcppExport SEXP _Seurat_FastSparseRowScale(SEXP matSEXP, SEXP scaleSEXP, SEXP centerSEXP, SEXP scale_maxSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type mat(matSEXP);
    Rcpp::traits::input_parameter< bool >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< bool >::type center(centerSEXP);
    Rcpp::traits::input_parameter< double >::type scale_max(scale_maxSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(FastSparseRowScale(mat, scale, center, scale_max, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// FastCov
Eigen::MatrixXd FastCov(Eigen::MatrixXd mat, bool center);
RcppExport SEXP _Seurat_FastCov(SEXP matSEXP, SEXP centerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type mat(matSEXP);
    Rcpp::traits::input_parameter< bool >::type center(centerSEXP);
    rcpp_result_gen = Rcpp::wrap(FastCov(mat, center));
    return rcpp_result_gen;
END_RCPP
}
// FastCovMats
Eigen::MatrixXd FastCovMats(Eigen::MatrixXd mat1, Eigen::MatrixXd mat2, bool center);
RcppExport SEXP _Seurat_FastCovMats(SEXP mat1SEXP, SEXP mat2SEXP, SEXP centerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type mat1(mat1SEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type mat2(mat2SEXP);
    Rcpp::traits::input_parameter< bool >::type center(centerSEXP);
    rcpp_result_gen = Rcpp::wrap(FastCovMats(mat1, mat2, center));
    return rcpp_result_gen;
END_RCPP
}
// FastRBind
Eigen::MatrixXd FastRBind(Eigen::MatrixXd mat1, Eigen::MatrixXd mat2);
RcppExport SEXP _Seurat_FastRBind(SEXP mat1SEXP, SEXP mat2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type mat1(mat1SEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type mat2(mat2SEXP);
    rcpp_result_gen = Rcpp::wrap(FastRBind(mat1, mat2));
    return rcpp_result_gen;
END_RCPP
}
// FastExpMean
Eigen::VectorXd FastExpMean(Eigen::SparseMatrix<double> mat, bool display_progress);
RcppExport SEXP _Seurat_FastExpMean(SEXP matSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type mat(matSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(FastExpMean(mat, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// FastLogVMR
Eigen::VectorXd FastLogVMR(Eigen::SparseMatrix<double> mat, bool display_progress);
RcppExport SEXP _Seurat_FastLogVMR(SEXP matSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type mat(matSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(FastLogVMR(mat, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// UpdateCov
List UpdateCov(Eigen::MatrixXd batch_mat, Eigen::MatrixXd cov_mat, Eigen::MatrixXd c1, int n1, Eigen::VectorXd m1);
RcppExport SEXP _Seurat_UpdateCov(SEXP batch_matSEXP, SEXP cov_matSEXP, SEXP c1SEXP, SEXP n1SEXP, SEXP m1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type batch_mat(batch_matSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type cov_mat(cov_matSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type c1(c1SEXP);
    Rcpp::traits::input_parameter< int >::type n1(n1SEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type m1(m1SEXP);
    rcpp_result_gen = Rcpp::wrap(UpdateCov(batch_mat, cov_mat, c1, n1, m1));
    return rcpp_result_gen;
END_RCPP
}
// ComputeSNN
Eigen::SparseMatrix<double> ComputeSNN(Eigen::MatrixXd nn_large, Eigen::MatrixXd nn_ranked, double prune, bool display_progress);
RcppExport SEXP _Seurat_ComputeSNN(SEXP nn_largeSEXP, SEXP nn_rankedSEXP, SEXP pruneSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type nn_large(nn_largeSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type nn_ranked(nn_rankedSEXP);
    Rcpp::traits::input_parameter< double >::type prune(pruneSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(ComputeSNN(nn_large, nn_ranked, prune, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// WriteEdgeFile
void WriteEdgeFile(Eigen::SparseMatrix<double> snn, String filename, bool display_progress);
RcppExport SEXP _Seurat_WriteEdgeFile(SEXP snnSEXP, SEXP filenameSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type snn(snnSEXP);
    Rcpp::traits::input_parameter< String >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    WriteEdgeFile(snn, filename, display_progress);
    return R_NilValue;
END_RCPP
}
// DirectSNNToFile
Eigen::SparseMatrix<double> DirectSNNToFile(Eigen::MatrixXd nn_large, Eigen::MatrixXd nn_ranked, double prune, bool display_progress, String filename);
RcppExport SEXP _Seurat_DirectSNNToFile(SEXP nn_largeSEXP, SEXP nn_rankedSEXP, SEXP pruneSEXP, SEXP display_progressSEXP, SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type nn_large(nn_largeSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type nn_ranked(nn_rankedSEXP);
    Rcpp::traits::input_parameter< double >::type prune(pruneSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    Rcpp::traits::input_parameter< String >::type filename(filenameSEXP);
    rcpp_result_gen = Rcpp::wrap(DirectSNNToFile(nn_large, nn_ranked, prune, display_progress, filename));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_Seurat_RunUMISampling", (DL_FUNC) &_Seurat_RunUMISampling, 4},
    {"_Seurat_RunUMISamplingPerCell", (DL_FUNC) &_Seurat_RunUMISamplingPerCell, 4},
    {"_Seurat_RowMergeMatrices", (DL_FUNC) &_Seurat_RowMergeMatrices, 5},
    {"_Seurat_LogNorm", (DL_FUNC) &_Seurat_LogNorm, 3},
    {"_Seurat_FastMatMult", (DL_FUNC) &_Seurat_FastMatMult, 2},
    {"_Seurat_FastRowScale", (DL_FUNC) &_Seurat_FastRowScale, 5},
    {"_Seurat_Standardize", (DL_FUNC) &_Seurat_Standardize, 2},
    {"_Seurat_FastSparseRowScale", (DL_FUNC) &_Seurat_FastSparseRowScale, 5},
    {"_Seurat_FastCov", (DL_FUNC) &_Seurat_FastCov, 2},
    {"_Seurat_FastCovMats", (DL_FUNC) &_Seurat_FastCovMats, 3},
    {"_Seurat_FastRBind", (DL_FUNC) &_Seurat_FastRBind, 2},
    {"_Seurat_FastExpMean", (DL_FUNC) &_Seurat_FastExpMean, 2},
    {"_Seurat_FastLogVMR", (DL_FUNC) &_Seurat_FastLogVMR, 2},
    {"_Seurat_UpdateCov", (DL_FUNC) &_Seurat_UpdateCov, 5},
    {"_Seurat_ComputeSNN", (DL_FUNC) &_Seurat_ComputeSNN, 4},
    {"_Seurat_WriteEdgeFile", (DL_FUNC) &_Seurat_WriteEdgeFile, 3},
    {"_Seurat_DirectSNNToFile", (DL_FUNC) &_Seurat_DirectSNNToFile, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_Seurat(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
