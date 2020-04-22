##__________________________________________________________________||
## T1qqqq                                                                                                                                                                            
SMS_T1qqqq_madgraphMLM = dict(name = "SMS_T1qqqq_madgraphMLM" , dataset = "/SMS-T1qqqq_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/RunIISpring16MiniAODv2-PUSpring16Fast_80X_mcRun2_asymptotic_2016_miniAODv2_v0-v1/MINIAODSIM",  user = "CMS", pattern = ".*root", xSec = 1.)

##__________________________________________________________________|| 
## T1bbbb
SMS_T1bbbb_madgraphMLM = dict(name = "SMS_T1bbbb_madgraphMLM" , dataset = "/SMS-T1bbbb_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/RunIISpring16MiniAODv2-PUSpring16Fast_80X_mcRun2_asymptotic_2016_miniAODv2_v0-v1/MINIAODSIM",  user = "CMS", pattern = ".*root", xSec = 1.)

##__________________________________________________________________||
## T1tttt
SMS_T1tttt_madgraphMLM = dict(name = "SMS_T1tttt_madgraphMLM" , dataset = "/SMS-T1tttt_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/RunIISpring16MiniAODv2-PUSpring16Fast_80X_mcRun2_asymptotic_2016_miniAODv2_v0-v1/MINIAODSIM",  user = "CMS", pattern = ".*root", xSec = 1.)

##__________________________________________________________________||
## T2bb
SMS_T2bb_madgraphMLM = dict(name = "SMS_T2bb_madgraphMLM" , dataset = "/SMS-T2bb_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/RunIISpring16MiniAODv2-PUSpring16Fast_80X_mcRun2_asymptotic_2016_miniAODv2_v0-v1/MINIAODSIM",  user = "CMS", pattern = ".*root", xSec = 1.)

##__________________________________________________________________||
## T2tt
SMS_T2tt_mStop_150to250_madgraphMLM = dict(name = "SMS_T2tt_mStop_150to250_madgraphMLM" , dataset = "/SMS-T2tt_mStop-150to250_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/RunIISpring16MiniAODv2-PUSpring16Fast_80X_mcRun2_asymptotic_2016_miniAODv2_v0-v1/MINIAODSIM",  user = "CMS", pattern = ".*root", xSec = 1.)

SMS_T2tt_mStop_250to350_madgraphMLM = dict(name = "SMS_T2tt_mStop_250to350_madgraphMLM" , dataset = "/SMS-T2tt_mStop-250to350_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/RunIISpring16MiniAODv2-PUSpring16Fast_80X_mcRun2_asymptotic_2016_miniAODv2_v0-v1/MINIAODSIM",  user = "CMS", pattern = ".*root", xSec = 1.)

SMS_T2tt_mStop_400to1200_madgraphMLM = dict(name = "SMS_T2tt_mStop_400to1200_madgraphMLM" , dataset = "/SMS-T2tt_mStop-400to1200_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/RunIISpring16MiniAODv2-PUSpring16Fast_80X_mcRun2_asymptotic_2016_miniAODv2_v0-v1/MINIAODSIM",  user = "CMS", pattern = ".*root", xSec = 1.)

##__________________________________________________________________||
## T2qq
SMS_T2qq_madgraphMLM = dict(name = "SMS_T2qq_madgraphMLM" , dataset = "/SMS-T2qq_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/RunIISpring16MiniAODv2-PUSpring16Fast_80X_mcRun2_asymptotic_2016_miniAODv2_v0-v1/MINIAODSIM", user = "CMS", pattern = ".*root", xSec = 1.)

##__________________________________________________________________||
## T2cc
SMS_T2cc_madgraphMLM = dict(name = "SMS_T2cc_madgraphMLM" , dataset = "/SMS-T2cc_genHT-160_genMET-80_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/RunIISpring16MiniAODv2-PUSpring16Fast_80X_mcRun2_asymptotic_2016_miniAODv2_v0-v1/MINIAODSIM", user = "CMS", pattern = ".*root", xSec = 1.)

##__________________________________________________________________||

componentList_SMS_FastSim = [SMS_T1bbbb_madgraphMLM,
                             SMS_T1qqqq_madgraphMLM,
                             SMS_T1tttt_madgraphMLM,
                             SMS_T2bb_madgraphMLM,
                             SMS_T2tt_mStop_150to250_madgraphMLM,
                             SMS_T2tt_mStop_250to350_madgraphMLM,
                             SMS_T2tt_mStop_400to1200_madgraphMLM,
                             SMS_T2cc_madgraphMLM,
                             SMS_T2qq_madgraphMLM]

##__________________________________________________________________||

if __name__ == "__main__":
    componentList = componentList_SMS_FastSim


    from CMGTools.RA1.components.ComponentCreator import ComponentCreator
    kreator = ComponentCreator()
    components = [kreator.makeMCComponent(**s) for s in componentList]
    import sys
    if "test" in sys.argv:
        from CMGTools.RA1.components.ComponentCreator import testSamples
        testSamples(components)

