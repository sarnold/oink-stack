=========================
Welcome to Elsa and Oink!
=========================

Please see the documentation in
http://danielwilkerson.com/oink/index.html or locally in
oink/Doc/index.html and in files throughout containing the substring
"readme" in various capitalizations.

It is our intent that every part of the project be released under a
BSD-like license/terms-of-use, though the copyrights may differ.
Various software in this project is released under different
copyrights and licenses/terms-of-use; to find the copyrights and
licenses/terms-of-use please see files named License.txt and any other
files having names containing the substring "license" in any
capitalization.

Contributors are required to place their contributions into the public
domain and to send me an email thereby effecting such placement.
These emails are checked in to Contributors/ .

Enjoy!
        Daniel


--------------------
Current build issues
--------------------

As of 08-22-2015, patched in ebuild in portage overlay:

1. perl array error (new in perl 5.22) causes configure.pl to blow up

2. deprecated pure_parser directive should be pure-parser

3. And most importantly, it will NOT build with any version of Bison3 in portage, and must be hard-dep'd on bison 2 (sys-devel/bison-2.7.1 works fine).

Other ebuild changes are mostly to clean up docs and make the install (mostly) FHS-compliant.  At least the couple of relevant ebuild patches will arrive here shortly.  Like upstream says, enjoy!  And take a break once in a while...
