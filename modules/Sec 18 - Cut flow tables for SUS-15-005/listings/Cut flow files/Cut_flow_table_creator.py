# need to install the "tabulate" package (pip install tabulate)

from tabulate import tabulate

# Cells in table: [ selection, eff_sample 1, eff_sample 2, eff_sample 3, eff_sample 4 ],

# REORDER CUTS IF NEEDS BE

table = [
    [ "-", "100", "100", "100", "100" ],
    [ "Trigger selection", "100", "100", "100", "100" ],
    [ "Lepton vetoes", "/", "/", "/", "," ],
    [ "Isolated track veto", "/", "/", "/", "," ],
    [ "Photon veto", "/", "/", "/", "," ],
    [ "Forward jet veto", "/", "/", "/", "," ],
    [ "n_jet >= 2 (pT^j > 40 GeV)", "/", "/", "/", "," ],
    [ "CHF^j1", "/", "/", "/", "," ],
    [ "pT^j1 > 100 GeV", "/", "/", "/", "," ],
    [ "|eta^j1| < 2.5", "/", "/", "/", "," ],
    [ "HT > 200 GeV", "/", "/", "/", "," ],
    [ "HT^miss > 130 GeV (pT^j > 40 GeV)", "/", "/", "/", "," ],
    [ "HT^miss / E_T^miss < 1.25", "/", "/", "/", "," ],
    [ "Alpha_T H_T-dependent cuts", "/", "/", "/", "," ],
    [ "bDPhi > 0.5", "/", "/", "/", "," ],
    [ "Most sensitive n_jet category cuts", "/", "/", "/", "," ],
    [ "HT > 800 GeV", "/", "/", "/", "," ],
    [ "HT^miss > 800 GeV", "/", "/", "/", "," ],
]

headers = [ "Event selection",
            "T1qqqq (1300, 100)", "T1qqqq (900, 700)",
            "T2qq_8fold (1050, 100)", "T2qq_8fold (650, 550)" ]

print tabulate( table, headers, numalign="decimal", floatfmt=".2f", tablefmt="latex" )

# Note "Trigger selection" is just assumed to be 100% for each sample