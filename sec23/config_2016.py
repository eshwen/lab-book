from collections import namedtuple

info = namedtuple("info","sparticle baseInDir baseOutDir genEvtsFile massInfoDir")


info_T1tttt = info(
    sparticle = "Gluino",
    baseInDir = "/vols/cms/RA1/80X/MC/20170510_SMS-Spring16_DM-Summer16/AtLogicNoSelection_MCMiniAODv2_SUSY_SMS_FastSim/",
    baseOutDir = "/vols/cms/RA1/80X/MC/20170510_SMS-Spring16_DM-Summer16/AtLogicNoSelection_MCMiniAODv2_SUSY_SMS_FastSim/MassSplittings/T1tttt/",
    genEvtsFile = "/vols/cms/RA1/80X/MC/20160729_S01_MCMiniAODv2_SMS_ForIsrSyst/AtLogicNoSelection_MCMiniAODv2_SUSY_SMS_FastSim/SMS_T1tttt_madgraphMLM/susyParameterScanAnalyzer/genEvtsPerMass.root",
    massInfoDir = "/vols/cms/RA1/80X/MC/20160729_S01_MCMiniAODv2_SMS_T1ttttSplit/MassInfo/"
    )

info_T2bb = info(
    sparticle = "Sbottom",
    baseInDir = "/vols/cms/RA1/80X/MC/20170510_SMS-Spring16_DM-Summer16/AtLogicNoSelection_MCMiniAODv2_SUSY_SMS_FastSim/",
    baseOutDir = "/vols/cms/RA1/80X/MC/20170510_SMS-Spring16_DM-Summer16/AtLogicNoSelection_MCMiniAODv2_SUSY_SMS_FastSim/MassSplittings/SplitTrees/",
    genEvtsFile = "/vols/cms/RA1/80X/MC/20170510_SMS-Spring16_DM-Summer16/AtLogicNoSelection_MCMiniAODv2_SUSY_SMS_FastSim/MassSplittings/MassInfo/genEvtsPerMass_T2bb.root",
    massInfoDir = "/vols/cms/RA1/80X/MC/20170510_SMS-Spring16_DM-Summer16/AtLogicNoSelection_MCMiniAODv2_SUSY_SMS_FastSim/MassSplittings/MassInfo/"
    )

info_T1bbbb = info(
    sparticle = "Gluino",
    baseInDir = "/vols/cms/RA1/80X/MC/20170510_SMS-Spring16_DM-Summer16/AtLogicNoSelection_MCMiniAODv2_SUSY_SMS_FastSim/",
    baseOutDir = "/vols/cms/RA1/80X/MC/20170510_SMS-Spring16_DM-Summer16/AtLogicNoSelection_MCMiniAODv2_SUSY_SMS_FastSim/MassSplittings/SplitTrees/",
    genEvtsFile = "/vols/cms/RA1/80X/MC/20170510_SMS-Spring16_DM-Summer16/AtLogicNoSelection_MCMiniAODv2_SUSY_SMS_FastSim/MassSplittings/MassInfo/genEvtsPerMass_T1bbbb.root",
    massInfoDir = "/vols/cms/RA1/80X/MC/20170510_SMS-Spring16_DM-Summer16/AtLogicNoSelection_MCMiniAODv2_SUSY_SMS_FastSim/MassSplittings/MassInfo/"
    )

info_T2cc = info(
    sparticle = "Stop",
    baseInDir = "/vols/cms/RA1/80X/MC/20170510_SMS-Spring16_DM-Summer16/AtLogicNoSelection_MCMiniAODv2_SUSY_SMS_FastSim/",
    baseOutDir = "/vols/cms/RA1/80X/MC/20170510_SMS-Spring16_DM-Summer16/AtLogicNoSelection_MCMiniAODv2_SUSY_SMS_FastSim/MassSplittings/SplitTrees/",
    genEvtsFile = "/vols/cms/RA1/80X/MC/20170510_SMS-Spring16_DM-Summer16/AtLogicNoSelection_MCMiniAODv2_SUSY_SMS_FastSim/MassSplittings/MassInfo/genEvtsPerMass_T2cc.root",
    massInfoDir = "/vols/cms/RA1/80X/MC/20170510_SMS-Spring16_DM-Summer16/AtLogicNoSelection_MCMiniAODv2_SUSY_SMS_FastSim/MassSplittings/MassInfo/",
    )

info_T1qqqq = info(
    sparticle = "Gluino",
    baseInDir = "/vols/cms/RA1/80X/MC/20160729_S01_MCMiniAODv2_SMS_ForIsrSyst/AtLogicNoSelection_MCMiniAODv2_SUSY_SMS_FastSim/",
    baseOutDir = "/vols/cms/RA1/80X/MC/20160731_S01_MCMiniAODv2_SMS_T1qqqqSplit/AtLogicNoSelection_MCMiniAODv2_SUSY_SMS_FastSim/",
    genEvtsFile = "/vols/cms/RA1/80X/MC/20160729_S01_MCMiniAODv2_SMS_ForIsrSyst/AtLogicNoSelection_MCMiniAODv2_SUSY_SMS_FastSim/SMS_T1qqqq_madgraphMLM/susyParameterScanAnalyzer/genEvtsPerMass.root",
    massInfoDir = "/vols/cms/RA1/80X/MC/20160729_S01_MCMiniAODv2_SMS_T1qqqqSplit/MassInfo/"
    )

info_T2tt = info(
    sparticle = "Stop",
    baseInDir = "/vols/cms/RA1/80X/MC/20160727_S01_MCMiniAODv2_SMS_ForIsrSyst/AtLogicNoSelection_MCMiniAODv2_SUSY_SMS_FastSim/",
    baseOutDir = "/vols/cms/RA1/80X/MC/20160729_S01_MCMiniAODv2_SMS_T2ttSplit/AtLogicNoSelection_MCMiniAODv2_SUSY_SMS_FastSim/",
    genEvtsFile = "/vols/cms/RA1/80X/MC/20160729_S01_MCMiniAODv2_SMS_T2ttSplit/GenEventsInfo/genEvtsPerMass_T2tt.root",
    massInfoDir = "/vols/cms/RA1/80X/MC/20160729_S01_MCMiniAODv2_SMS_T2ttSplit/MassInfo/"
    )

info_T2qq = info(
    sparticle = "Squark",
    baseInDir = "/vols/cms/RA1/80X/MC/20160730_S01_MCMiniAODv2_SMS_ForIsrSyst/AtLogicNoSelection_MCMiniAODv2_SUSY_SMS_FastSim/",
    baseOutDir = "/vols/cms/RA1/80X/MC/20160730_S01_MCMiniAODv2_SMST2qqSplit/AtLogicNoSelection_MCMiniAODv2_SUSY_SMS_FastSim/",
    genEvtsFile = "/vols/cms/RA1/80X/MC/20160730_S01_MCMiniAODv2_SMS_ForIsrSyst/AtLogicNoSelection_MCMiniAODv2_SUSY_SMS_FastSim/SMS_T2qq_madgraphMLM/susyParameterScanAnalyzer/genEvtsPerMass.root",
    massInfoDir = "/vols/cms/RA1/80X/MC/20160730_S01_MCMiniAODv2_SMST2qqSplit/MassInfo/"
    )
