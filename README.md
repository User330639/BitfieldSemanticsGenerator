# BitfieldSemanticsGenerator

Simple script and GUI intended to generate bitfield definitions for an arbitary device with an arbitary set of registers.
Each register is described by its address, semantics (optional) and a set of semantics for separate bit fields: the semantics itself, the field offset and its length.
The output of the script is <devicename>.h file with the semantics generated where <devicename> is how the user designates their device (for example, HMCAD1511 yields hmcad1511.h).
