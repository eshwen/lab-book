# Unpack the lhco.gz and lhe.gz files generated from Pythia and pgs and convert to .root files.
# Note: once unpacked, the .gz files are deleted, so only run this once after new Madgraph runs.
# To use the converter, the template is <directory to converter> <input file> <output file>

gunzip ../MG5_aMC_v2_4_3/sm_test_ppZjets/Events/run_01/tag_1_pgs_events.lhco.gz

../MG5_aMC_v2_4_3/ExRootAnalysis/ExRootLHCOlympicsConverter     ../MG5_aMC_v2_4_3/sm_test_ppZjets/Events/run_01/tag_1_pgs_events.lhco     ../MG5_aMC_v2_4_3/sm_test_ppZjets/Events/run_01/tag_1_pgs_events.root


gunzip ../MG5_aMC_v2_4_3/sm_test_ppZjets/Events/run_01/tag_1_pythia_events.lhe.gz

../MG5_aMC_v2_4_3/ExRootAnalysis/ExRootLHEFConverter    ../MG5_aMC_v2_4_3/sm_test_ppZjets/Events/run_01/tag_1_pythia_events.lhe   ../MG5_aMC_v2_4_3/sm_test_ppZjets/Events/run_01/tag_1_pythia_lhe_events.root
