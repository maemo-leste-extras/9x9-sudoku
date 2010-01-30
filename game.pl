#!/usr/bin/perl
#
# $Id; game.pl $
#
# Author: Tomi Ollila -- too ät iki piste fi
#
#	Copyright (c) 2010 Tomi Ollila
#	    All rights reserved
#
# Created: Sat 30 Jan 2010 20:16:55 EET too
# Last modified: Sat 30 Jan 2010 23:15:36 EET too

use strict;
use warnings;

$| = 1;

#print "foo\n";
#print "ar\n";

my $pbx = 0;
my $pby = 0;
my $pbs = 0;
my $pbv = 0;

while (<STDIN>) {
    #print STDERR "----------------perl input: $_\n";
    my ($w, $x, $y, @r) = split;

    if ($w eq '*') { # button
	if ($pbx != $x || $pby != $y) {
	    print "*$pbx$pby/\n";
	    print "*$x$y+\n";
	    $pbx = $x; $pby = $y; $pbs = 0;
	}
	else {
	    if ($pbs) {	print "*$x$y+\n"; $pbs = 0; }
	    else {	print "*$x$y.\n"; $pbs = 1; }
	}
	$pbv = $x + $y * 5;
    }
    elsif ($w eq '#') {
	    print "#$x$y/$pbv\n";
    }
}

