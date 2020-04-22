import ROOT

def make_chain(target, sources, tree="tree"):
    chain = ROOT.TChain(tree)
    for source in sources:
        chain.Add(source)
    chain.SaveAs(target)

if __name__ == '__main__':

    from argparse import ArgumentParser

    parser = ArgumentParser()
    parser.add_argument("target", help="Target root file")
    parser.add_argument("sources", help="Source root files", nargs="+")
    parser.add_argument("-t", "--tree", help="Name of the tree in the root files", default="tree")
    args = parser.parse_args()

    make_chain(**vars(args))