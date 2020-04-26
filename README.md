# lab-book

[![Build Status](https://travis-ci.com/eshwen/lab-book.svg?branch=master)](https://travis-ci.com/eshwen/lab-book) [![GitHub release (latest by date including pre-releases)](https://img.shields.io/github/v/release/eshwen/lab-book?include_prereleases)](https://github.com/eshwen/lab-book/releases/latest) ![GitHub tag (latest by date)](https://img.shields.io/github/v/tag/eshwen/lab-book) ![GitHub repo size](https://img.shields.io/github/repo-size/eshwen/lab-book) ![GitHub top language](https://img.shields.io/github/languages/top/eshwen/lab-book)

[![GitHub Releases (by Asset - pdf)](https://img.shields.io/github/downloads/eshwen/lab-book/latest/labbook_ci.pdf?color=ff69b4)](https://github.com/eshwen/lab-book/releases/latest/download/labbook_ci.pdf) [![GitHub Releases (by Asset - word count)](https://img.shields.io/github/downloads/eshwen/lab-book/latest/word_count.html?color=ff69b4)](https://github.com/eshwen/lab-book/releases/latest/download/word_count.html)

Lab book I kept (mostly) during my thesis

- [lab-book](#lab-book)
  - [General information](#general-information)
  - [Structure and features](#structure-and-features)
    - [Bibliography](#bibliography)
    - [HEP particles](#hep-particles)
    - [Word count](#word-count)
    - [Continuous integration](#continuous-integration)
  - [Compiling the document](#compiling-the-document)
    - [Visual Studio Code](#visual-studio-code)
    - [CLI](#cli)
    - [TeXShop](#texshop)
  - [Badges](#badges)
  - [Useful links](#useful-links)
  - [To do list](#to-do-list)

[_Table of contents generated with markdown-toc_](http://ecotrust-canada.github.io/markdown-toc/)

## General information

This thesis uses the memoir document class, based off the template from [here](https://www.overleaf.com/latex/templates/university-of-bristol-thesis-template/kzqrfvyxxcdm), subsequently modified by myself for my PhD thesis [here](https://github.com/eshwen/phd-thesis). More information on the technical details can be found below.

## Structure and features

The master TeX file to compile is [labbook.tex](./labbook.tex). In here, all of the required packages are imported and the structure of the document is laid out. Additional user-defined macros are mostly consolidated in [macros.tex](macros.tex).

### Bibliography

To process the bibliography, the backend of my choice is `biber` in conjunction with the `biblatex` package, since it's much more modern that the `bibtex`-`natbib` combination. Therefore, it should be relatively future-proof. The bibliography style is IEEE.

### HEP particles

HEP particles and processes are typeset by importing the `hepnames` package (which also imports various other supporting ones). With the `italic` option, they are rendered in italics. The default is upright. To change the style, just edit the line that imports the package in [labbook.tex](./labbook.tex). More info. can be found in [Useful links](#useful-links). For additional symbols, quantities, units, programs, and operators commonly used in particle physics, the [`physics`](https://ctan.org/pkg/physics) package, and a copy of CMS'[`ptdr-definitions`](ptdr-definitions.sty), have also been imported.

### Word count

A word count for the thesis can be estimated by using the `TeXcount` package. It should be installable like any other (La)TeX package, but also has a website where you can manually download it: <https://app.uio.no/ifi/texcount/>. The following command can be run from the terminal (and is also run whenever my [continuous integration pipeline](#continuous-integration) is executed):

```sh
texcount -html -inc ./labbook.tex > word_count.html
```

This spits out a `word_count.html` file that can be viewed to get a rough idea of the thesis' footprint. The website above has more options for different metrics, and how to handle certain cases.

### Continuous integration

I've written a CI pipeline utilising Travis to compile the document. This includes a normal pdf and a rough word count. The configuration file [.travis.yml](./.travis.yml) and Tex Live install files from [texlive/](./texlive/) are based on <https://github.com/PHPirates/travis-ci-latex-pdf>, with some modifications by myself.

If one wishes to implement a similar pipeline, those instructions should be checked first. On every push, the pipeline is run: a basic TeX Live distro is installed along with all the required packages, the commands from [Compiling the document - CLI](#cli) are run to create the pdf, and finally the word count is estimated as in [Word count](#word-count).

I can see whether the documents compile successfully or not by the pipeline passing or failing. When a new tag is created, the output files mentioned above are uploaded to the **Assets** drop down menu for the release/tag to accompany the default source code archives. The badges on the homepage of the repo also contain download links to the latest versions of each file.

Note that the configuration of this CI is fairly specific to the implementation of my thesis, and not all features may work if the repository is private. These are:

- Implementation of `biblatex` and `biber` (with the IEEE style that requires explicit installation in the pipeline as it's not picked up automatically)
- Use of the memoir class
- Adding a GitHub token in the `deploy` stage of the config file. This is done to authenticate the upload of files when a new tag is made
  - The variable `GITHUB_CI_TOKEN` is a secure variable specific to me (Eshwen), so must be generated individually for a user to make use of the feature. More information is linked about [deployment](https://docs.travis-ci.com/user/deployment) and [GitHub tokens](https://github.com/settings/tokens)
- The package `texliveonfly` is used to install the packages required for compiling the document. But it doesn't always seem to install the dependencies. So I've had to add some packages to [texlive/texlive_packages](./texlive/texlive_packages) through trial-and-error by checking the logs from failed builds. Using new packages in the document therefore carries this small risk of failing the pipeline. This can be easily debugged, however

Because of the design choices above, the Tex Live version of the pipeline was necessary. If one is using more conventional implementations, there are several alternative instructions at <https://github.com/PHPirates/travis-ci-latex-pdf> that might be easier to pursue.

## Compiling the document

**Disclaimer**: I haven't tried compiling on Overleaf, only on my local MacTeX/TeX Live distributions and in the CI pipeline. So your mileage may vary depending on your IDE/OS of choice.

The master TeX file to compile is [labbook.tex](./labbook.tex). Documented below are some of the options that I've personally used to compile the document (in the order I would recommend). Note that your mileage may vary as per the disclaimer above.

### Visual Studio Code

To compile in Visual Studio Code, install the **LaTeX Workshop** extension (see [documentation](https://github.com/James-Yu/LaTeX-Workshop/wiki)). The build commands are similar to TeXShop, but can be customised, e.g., to get the glossary to compile properly. Copy the snippet from [vscode_settings.json](vscode_settings.json) into your Visual Studio Code's `settings.json`. After reloading the program, just go to the TeX sidebar -> Build LaTeX project -> **Recipe: pdflatexmk**.

### CLI

In the terminal, it's as simple as

```sh
latexmk -synctex=1 -interaction=nonstopmode -pdf labbook.tex
```

### TeXShop

To compile in TeXShop on Mac, select **pdflatexmk** from the drop-down menu next to **Typeset**, then hit the **Typeset** button. This can misbehave as it's quite a large document. If this is the case, run [trash_aux_files.sh](./trash_aux_files.sh) to wipe all of the auxiliary files and recompile.

## Badges

Badges are pretty useful to highlight the important aspects of a repo to any potential forker/contributor. The build status badge is from [Travis](https://travis-ci.com/), linked to my CI pipeline. All of the others are from Shields ([webpage](https://shields.io/), [repo](https://github.com/badges/shields)). They are free to use, but obviously the badges are tied to the original fork of the repository. So to continue using them in your own fork, you can generate them yourself with these as inspiration. Note that not every badge may work if the repository is private. Server load can also mean that not every badge icon may render each time the repo is viewed. Any hyperlinks should still work though, e.g., for the downloads of latest pdfs.

## Useful links

- The Comprehensive LaTeX Symbol List: <https://www.ctan.org/pkg/comprehensive> ([local copy](helpful_docs/symbols-a4.pdf))
- Symbol list for particle names: [`hepnicenames`](http://mirrors.ctan.org/macros/latex/contrib/hepnames/hepnicenames-rm.pdf), [`heppennames`](http://mirrors.ctan.org/macros/latex/contrib/hepnames/heppennames-rm.pdf), [`ptdr-definitions`](ptdr-definitions.sty) (additional macros for CMS publications)
- Generating a table of contents automatically for a GitHub README: <https://ecotrust-canada.github.io/markdown-toc/>
- Previewing a GitHub README: <https://jbt.github.io/markdown-editor/>

## To do list

- Organise the files better:
  - Move everything into the `modules` directory. Then have one subdirectory for each section of the lab book, with further subdirectories for figures, etc.
  - Move title and abstract into separate files and put in a `frontmatter` folder
  - Put my `mybib.bib` file in a `backmatter` folder
  - Go through lab book and modernise things where possible, reducing the need for additional, unnecessary packages
  - Replace additional repeated commands with macros
