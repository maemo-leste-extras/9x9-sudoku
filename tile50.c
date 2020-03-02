#include "tile50.h"

int tile50_width = 50;
int tile50_height = 50;
int tile50_bytes = 3;

const unsigned char tile50_pixel_data[ 50 * 50 * 3 + 1 ] =
  "\0\0\0\0\0\0\0\0\0\0\0\0\26\26,<<x\\\\\263yy\354\200\200\377\200\200\377"
  "\200\200\377\200\200\377\200\200\377\200\200\377\200\200\377\200\200\377"
  "\200\200\377\200\200\377\200\200\377\200\200\377\200\200\377\200\200\377"
  "\200\200\377\200\200\377\200\200\377\200\200\377\200\200\377\200\200\377"
  "\200\200\377\200\200\377\200\200\377\200\200\377\200\200\377\200\200\377"
  "\200\200\377\200\200\377\200\200\377\200\200\377\200\200\377\200\200\377"
  "\200\200\377\200\200\377{{\357^^\270@@\200\32\32""4\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\2\2\4AA\201\200\200\374\216\216\353\246\246\353\270\270\342"
  "\277\277\337\277\277\337\277\277\337\277\277\337\277\277\337\277\277\337"
  "\277\277\337\277\277\337\277\277\337\277\277\337\277\277\337\277\277\337"
  "\277\277\337\277\277\337\277\277\337\277\277\337\277\277\337\277\277\337"
  "\277\277\337\277\277\337\277\277\337\277\277\337\277\277\337\277\277\337"
  "\277\277\337\277\277\337\277\277\337\277\277\337\277\277\337\277\277\337"
  "\277\277\337\277\277\337\277\277\337\277\277\337\270\270\342\246\246\353"
  "\220\220\354\200\200\372II\216\4\4\10\0\0\0\0\0\0\0\0\0\2\2\4hh\312\203\203"
  "\364\274\274\342\325\325\325\325\325\325\325\325\325\325\325\325\325\325"
  "\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325"
  "\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325"
  "\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325"
  "\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325"
  "\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325"
  "\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325\302\302"
  "\336\207\207\361pp\330\6\6\14\0\0\0\0\0\0AA\201\203\203\364\316\316\330\325"
  "\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325"
  "\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325"
  "\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325"
  "\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325"
  "\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325"
  "\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325"
  "\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325\325\321"
  "\321\327\212\212\360MM\227\0\0\0\26\26,\200\200\374\274\274\342\326\326\326"
  "\326\326\326\326\326\326\326\326\326\326\326\326\326\326\326\326\326\326"
  "\326\326\326\326\326\326\326\326\326\326\326\326\326\326\326\326\326\326"
  "\326\326\326\326\326\326\326\326\326\326\326\326\326\326\326\326\326\326"
  "\326\326\326\326\326\326\326\326\326\326\326\326\326\326\326\326\326\326"
  "\326\326\326\326\326\326\326\326\326\326\326\326\326\326\326\326\326\326"
  "\326\326\326\326\326\326\326\326\326\326\326\326\326\326\326\326\326\326"
  "\326\326\326\326\326\326\326\326\326\326\326\326\326\326\326\326\326\326"
  "\326\326\326\306\306\336\200\200\374\40\40@<<x\217\217\354\330\330\330\330"
  "\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330"
  "\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330"
  "\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330"
  "\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330"
  "\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330"
  "\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330"
  "\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330"
  "\330\330\330\330\330\330\330\330\234\234\355MM\230\\\\\263\250\250\355\330"
  "\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330"
  "\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330"
  "\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330"
  "\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330"
  "\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330"
  "\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330"
  "\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330\330"
  "\330\330\330\330\330\330\330\330\330\330\330\261\261\351pp\326yy\354\274"
  "\274\346\331\331\331\331\331\331\331\331\331\331\331\331\331\331\331\331"
  "\331\331\331\331\331\331\331\331\331\331\331\331\331\331\331\331\331\331"
  "\331\331\331\331\331\331\331\331\331\331\331\331\331\331\331\331\331\331"
  "\331\331\331\331\331\331\331\331\331\331\331\331\331\331\331\331\331\331"
  "\331\331\331\331\331\331\331\331\331\331\331\331\331\331\331\331\331\331"
  "\331\331\331\331\331\331\331\331\331\331\331\331\331\331\331\331\331\331"
  "\331\331\331\331\331\331\331\331\331\331\331\331\331\331\331\331\331\331"
  "\331\331\331\331\331\331\331\331\331\331\331\331\331\331\301\301\343~~\373"
  "\200\200\377\303\303\343\332\332\332\332\332\332\332\332\332\332\332\332"
  "\332\332\332\332\332\332\332\332\332\332\332\332\332\332\332\332\332\332"
  "\332\332\332\332\332\332\332\332\332\332\332\332\332\332\332\332\332\332"
  "\332\332\332\332\332\332\332\332\332\332\332\332\332\332\332\332\332\332"
  "\332\332\332\332\332\332\332\332\332\332\332\332\332\332\332\332\332\332"
  "\332\332\332\332\332\332\332\332\332\332\332\332\332\332\332\332\332\332"
  "\332\332\332\332\332\332\332\332\332\332\332\332\332\332\332\332\332\332"
  "\332\332\332\332\332\332\332\332\332\332\332\332\332\332\332\332\332\332"
  "\303\303\343\200\200\377\200\200\377\304\304\344\333\333\333\333\333\333"
  "\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333"
  "\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333"
  "\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333"
  "\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333"
  "\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333"
  "\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333"
  "\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333"
  "\333\333\333\333\333\333\304\304\344\200\200\377\200\200\377\305\305\345"
  "\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334"
  "\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334"
  "\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334"
  "\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334"
  "\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334"
  "\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334"
  "\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334"
  "\334\334\334\334\334\334\334\334\334\334\334\334\305\305\345\200\200\377"
  "\200\200\377\306\306\346\335\335\335\335\335\335\335\335\335\335\335\335"
  "\335\335\335\335\335\335\335\335\335\335\335\335\335\335\335\335\335\335"
  "\335\335\335\335\335\335\335\335\335\335\335\335\335\335\335\335\335\335"
  "\335\335\335\335\335\335\335\335\335\335\335\335\335\335\335\335\335\335"
  "\335\335\335\335\335\335\335\335\335\335\335\335\335\335\335\335\335\335"
  "\335\335\335\335\335\335\335\335\335\335\335\335\335\335\335\335\335\335"
  "\335\335\335\335\335\335\335\335\335\335\335\335\335\335\335\335\335\335"
  "\335\335\335\335\335\335\335\335\335\335\335\335\335\335\335\335\335\335"
  "\306\306\346\200\200\377\200\200\377\306\306\346\336\336\336\336\336\336"
  "\336\336\336\336\336\336\336\336\336\336\336\336\336\336\336\336\336\336"
  "\336\336\336\336\336\336\336\336\336\336\336\336\336\336\336\336\336\336"
  "\336\336\336\336\336\336\336\336\336\336\336\336\336\336\336\336\336\336"
  "\336\336\336\336\336\336\336\336\336\336\336\336\336\336\336\336\336\336"
  "\336\336\336\336\336\336\336\336\336\336\336\336\336\336\336\336\336\336"
  "\336\336\336\336\336\336\336\336\336\336\336\336\336\336\336\336\336\336"
  "\336\336\336\336\336\336\336\336\336\336\336\336\336\336\336\336\336\336"
  "\336\336\336\336\336\336\306\306\346\200\200\377\200\200\377\307\307\347"
  "\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337"
  "\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337"
  "\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337"
  "\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337"
  "\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337"
  "\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337"
  "\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337"
  "\337\337\337\337\337\337\337\337\337\337\337\337\307\307\347\200\200\377"
  "\200\200\377\307\307\347\337\337\337\337\337\337\337\337\337\337\337\337"
  "\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337"
  "\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337"
  "\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337"
  "\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337"
  "\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337"
  "\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337"
  "\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337"
  "\307\307\347\200\200\377\200\200\377\310\310\350\340\340\340\340\340\340"
  "\340\340\340\340\340\340\340\340\340\340\340\340\340\340\340\340\340\340"
  "\340\340\340\340\340\340\340\340\340\340\340\340\340\340\340\340\340\340"
  "\340\340\340\340\340\340\340\340\340\340\340\340\340\340\340\340\340\340"
  "\340\340\340\340\340\340\340\340\340\340\340\340\340\340\340\340\340\340"
  "\340\340\340\340\340\340\340\340\340\340\340\340\340\340\340\340\340\340"
  "\340\340\340\340\340\340\340\340\340\340\340\340\340\340\340\340\340\340"
  "\340\340\340\340\340\340\340\340\340\340\340\340\340\340\340\340\340\340"
  "\340\340\340\340\340\340\310\310\350\200\200\377\200\200\377\311\311\351"
  "\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342"
  "\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342"
  "\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342"
  "\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342"
  "\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342"
  "\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342"
  "\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342"
  "\342\342\342\342\342\342\342\342\342\342\342\342\311\311\351\200\200\377"
  "\200\200\377\311\311\351\342\342\342\342\342\342\342\342\342\342\342\342"
  "\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342"
  "\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342"
  "\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342"
  "\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342"
  "\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342"
  "\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342"
  "\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342\342"
  "\311\311\351\200\200\377\200\200\377\312\312\352\343\343\343\343\343\343"
  "\343\343\343\343\343\343\343\343\343\343\343\343\343\343\343\343\343\343"
  "\343\343\343\343\343\343\343\343\343\343\343\343\343\343\343\343\343\343"
  "\343\343\343\343\343\343\343\343\343\343\343\343\343\343\343\343\343\343"
  "\343\343\343\343\343\343\343\343\343\343\343\343\343\343\343\343\343\343"
  "\343\343\343\343\343\343\343\343\343\343\343\343\343\343\343\343\343\343"
  "\343\343\343\343\343\343\343\343\343\343\343\343\343\343\343\343\343\343"
  "\343\343\343\343\343\343\343\343\343\343\343\343\343\343\343\343\343\343"
  "\343\343\343\343\343\343\312\312\352\200\200\377\200\200\377\313\313\353"
  "\344\344\344\344\344\344\344\344\344\344\344\344\344\344\344\344\344\344"
  "\344\344\344\344\344\344\344\344\344\344\344\344\344\344\344\344\344\344"
  "\344\344\344\344\344\344\344\344\344\344\344\344\344\344\344\344\344\344"
  "\344\344\344\344\344\344\344\344\344\344\344\344\344\344\344\344\344\344"
  "\344\344\344\344\344\344\344\344\344\344\344\344\344\344\344\344\344\344"
  "\344\344\344\344\344\344\344\344\344\344\344\344\344\344\344\344\344\344"
  "\344\344\344\344\344\344\344\344\344\344\344\344\344\344\344\344\344\344"
  "\344\344\344\344\344\344\344\344\344\344\344\344\313\313\353\200\200\377"
  "\200\200\377\314\314\354\345\345\345\345\345\345\345\345\345\345\345\345"
  "\345\345\345\345\345\345\345\345\345\345\345\345\345\345\345\345\345\345"
  "\345\345\345\345\345\345\345\345\345\345\345\345\345\345\345\345\345\345"
  "\345\345\345\345\345\345\345\345\345\345\345\345\345\345\345\345\345\345"
  "\345\345\345\345\345\345\345\345\345\345\345\345\345\345\345\345\345\345"
  "\345\345\345\345\345\345\345\345\345\345\345\345\345\345\345\345\345\345"
  "\345\345\345\345\345\345\345\345\345\345\345\345\345\345\345\345\345\345"
  "\345\345\345\345\345\345\345\345\345\345\345\345\345\345\345\345\345\345"
  "\314\314\354\200\200\377\200\200\377\314\314\354\346\346\346\346\346\346"
  "\346\346\346\346\346\346\346\346\346\346\346\346\346\346\346\346\346\346"
  "\346\346\346\346\346\346\346\346\346\346\346\346\346\346\346\346\346\346"
  "\346\346\346\346\346\346\346\346\346\346\346\346\346\346\346\346\346\346"
  "\346\346\346\346\346\346\346\346\346\346\346\346\346\346\346\346\346\346"
  "\346\346\346\346\346\346\346\346\346\346\346\346\346\346\346\346\346\346"
  "\346\346\346\346\346\346\346\346\346\346\346\346\346\346\346\346\346\346"
  "\346\346\346\346\346\346\346\346\346\346\346\346\346\346\346\346\346\346"
  "\346\346\346\346\346\346\314\314\354\200\200\377\200\200\377\315\315\355"
  "\347\347\347\347\347\347\347\347\347\347\347\347\347\347\347\347\347\347"
  "\347\347\347\347\347\347\347\347\347\347\347\347\347\347\347\347\347\347"
  "\347\347\347\347\347\347\347\347\347\347\347\347\347\347\347\347\347\347"
  "\347\347\347\347\347\347\347\347\347\347\347\347\347\347\347\347\347\347"
  "\347\347\347\347\347\347\347\347\347\347\347\347\347\347\347\347\347\347"
  "\347\347\347\347\347\347\347\347\347\347\347\347\347\347\347\347\347\347"
  "\347\347\347\347\347\347\347\347\347\347\347\347\347\347\347\347\347\347"
  "\347\347\347\347\347\347\347\347\347\347\347\347\315\315\355\200\200\377"
  "\200\200\377\316\316\356\350\350\350\350\350\350\350\350\350\350\350\350"
  "\350\350\350\350\350\350\350\350\350\350\350\350\350\350\350\350\350\350"
  "\350\350\350\350\350\350\350\350\350\350\350\350\350\350\350\350\350\350"
  "\350\350\350\350\350\350\350\350\350\350\350\350\350\350\350\350\350\350"
  "\350\350\350\350\350\350\350\350\350\350\350\350\350\350\350\350\350\350"
  "\350\350\350\350\350\350\350\350\350\350\350\350\350\350\350\350\350\350"
  "\350\350\350\350\350\350\350\350\350\350\350\350\350\350\350\350\350\350"
  "\350\350\350\350\350\350\350\350\350\350\350\350\350\350\350\350\350\350"
  "\316\316\356\200\200\377\200\200\377\317\317\357\351\351\351\351\351\351"
  "\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351"
  "\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351"
  "\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351"
  "\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351"
  "\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351"
  "\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351"
  "\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351"
  "\351\351\351\351\351\351\317\317\357\200\200\377\200\200\377\317\317\357"
  "\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351"
  "\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351"
  "\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351"
  "\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351"
  "\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351"
  "\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351"
  "\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351\351"
  "\351\351\351\351\351\351\351\351\351\351\351\351\317\317\357\200\200\377"
  "\200\200\377\317\317\357\352\352\352\352\352\352\352\352\352\352\352\352"
  "\352\352\352\352\352\352\352\352\352\352\352\352\352\352\352\352\352\352"
  "\352\352\352\352\352\352\352\352\352\352\352\352\352\352\352\352\352\352"
  "\352\352\352\352\352\352\352\352\352\352\352\352\352\352\352\352\352\352"
  "\352\352\352\352\352\352\352\352\352\352\352\352\352\352\352\352\352\352"
  "\352\352\352\352\352\352\352\352\352\352\352\352\352\352\352\352\352\352"
  "\352\352\352\352\352\352\352\352\352\352\352\352\352\352\352\352\352\352"
  "\352\352\352\352\352\352\352\352\352\352\352\352\352\352\352\352\352\352"
  "\317\317\357\200\200\377\200\200\377\320\320\360\353\353\353\353\353\353"
  "\353\353\353\353\353\353\353\353\353\353\353\353\353\353\353\353\353\353"
  "\353\353\353\353\353\353\353\353\353\353\353\353\353\353\353\353\353\353"
  "\353\353\353\353\353\353\353\353\353\353\353\353\353\353\353\353\353\353"
  "\353\353\353\353\353\353\353\353\353\353\353\353\353\353\353\353\353\353"
  "\353\353\353\353\353\353\353\353\353\353\353\353\353\353\353\353\353\353"
  "\353\353\353\353\353\353\353\353\353\353\353\353\353\353\353\353\353\353"
  "\353\353\353\353\353\353\353\353\353\353\353\353\353\353\353\353\353\353"
  "\353\353\353\353\353\353\320\320\360\200\200\377\200\200\377\321\321\361"
  "\354\354\354\354\354\354\354\354\354\354\354\354\354\354\354\354\354\354"
  "\354\354\354\354\354\354\354\354\354\354\354\354\354\354\354\354\354\354"
  "\354\354\354\354\354\354\354\354\354\354\354\354\354\354\354\354\354\354"
  "\354\354\354\354\354\354\354\354\354\354\354\354\354\354\354\354\354\354"
  "\354\354\354\354\354\354\354\354\354\354\354\354\354\354\354\354\354\354"
  "\354\354\354\354\354\354\354\354\354\354\354\354\354\354\354\354\354\354"
  "\354\354\354\354\354\354\354\354\354\354\354\354\354\354\354\354\354\354"
  "\354\354\354\354\354\354\354\354\354\354\354\354\321\321\361\200\200\377"
  "\200\200\377\322\322\362\355\355\355\355\355\355\355\355\355\355\355\355"
  "\355\355\355\355\355\355\355\355\355\355\355\355\355\355\355\355\355\355"
  "\355\355\355\355\355\355\355\355\355\355\355\355\355\355\355\355\355\355"
  "\355\355\355\355\355\355\355\355\355\355\355\355\355\355\355\355\355\355"
  "\355\355\355\355\355\355\355\355\355\355\355\355\355\355\355\355\355\355"
  "\355\355\355\355\355\355\355\355\355\355\355\355\355\355\355\355\355\355"
  "\355\355\355\355\355\355\355\355\355\355\355\355\355\355\355\355\355\355"
  "\355\355\355\355\355\355\355\355\355\355\355\355\355\355\355\355\355\355"
  "\322\322\362\200\200\377\200\200\377\322\322\362\356\356\356\356\356\356"
  "\356\356\356\356\356\356\356\356\356\356\356\356\356\356\356\356\356\356"
  "\356\356\356\356\356\356\356\356\356\356\356\356\356\356\356\356\356\356"
  "\356\356\356\356\356\356\356\356\356\356\356\356\356\356\356\356\356\356"
  "\356\356\356\356\356\356\356\356\356\356\356\356\356\356\356\356\356\356"
  "\356\356\356\356\356\356\356\356\356\356\356\356\356\356\356\356\356\356"
  "\356\356\356\356\356\356\356\356\356\356\356\356\356\356\356\356\356\356"
  "\356\356\356\356\356\356\356\356\356\356\356\356\356\356\356\356\356\356"
  "\356\356\356\356\356\356\322\322\362\200\200\377\200\200\377\323\323\363"
  "\357\357\357\357\357\357\357\357\357\357\357\357\357\357\357\357\357\357"
  "\357\357\357\357\357\357\357\357\357\357\357\357\357\357\357\357\357\357"
  "\357\357\357\357\357\357\357\357\357\357\357\357\357\357\357\357\357\357"
  "\357\357\357\357\357\357\357\357\357\357\357\357\357\357\357\357\357\357"
  "\357\357\357\357\357\357\357\357\357\357\357\357\357\357\357\357\357\357"
  "\357\357\357\357\357\357\357\357\357\357\357\357\357\357\357\357\357\357"
  "\357\357\357\357\357\357\357\357\357\357\357\357\357\357\357\357\357\357"
  "\357\357\357\357\357\357\357\357\357\357\357\357\323\323\363\200\200\377"
  "\200\200\377\324\324\364\360\360\360\360\360\360\360\360\360\360\360\360"
  "\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360"
  "\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360"
  "\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360"
  "\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360"
  "\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360"
  "\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360"
  "\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360"
  "\324\324\364\200\200\377\200\200\377\324\324\364\360\360\360\360\360\360"
  "\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360"
  "\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360"
  "\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360"
  "\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360"
  "\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360"
  "\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360"
  "\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360\360"
  "\360\360\360\360\360\360\324\324\364\200\200\377\200\200\377\325\325\365"
  "\362\362\362\362\362\362\362\362\362\362\362\362\362\362\362\362\362\362"
  "\362\362\362\362\362\362\362\362\362\362\362\362\362\362\362\362\362\362"
  "\362\362\362\362\362\362\362\362\362\362\362\362\362\362\362\362\362\362"
  "\362\362\362\362\362\362\362\362\362\362\362\362\362\362\362\362\362\362"
  "\362\362\362\362\362\362\362\362\362\362\362\362\362\362\362\362\362\362"
  "\362\362\362\362\362\362\362\362\362\362\362\362\362\362\362\362\362\362"
  "\362\362\362\362\362\362\362\362\362\362\362\362\362\362\362\362\362\362"
  "\362\362\362\362\362\362\362\362\362\362\362\362\325\325\365\200\200\377"
  "\200\200\377\326\326\366\363\363\363\363\363\363\363\363\363\363\363\363"
  "\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363"
  "\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363"
  "\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363"
  "\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363"
  "\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363"
  "\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363"
  "\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363"
  "\326\326\366\200\200\377\200\200\377\326\326\366\363\363\363\363\363\363"
  "\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363"
  "\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363"
  "\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363"
  "\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363"
  "\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363"
  "\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363"
  "\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363\363"
  "\363\363\363\363\363\363\326\326\366\200\200\377\200\200\377\327\327\367"
  "\364\364\364\364\364\364\364\364\364\364\364\364\364\364\364\364\364\364"
  "\364\364\364\364\364\364\364\364\364\364\364\364\364\364\364\364\364\364"
  "\364\364\364\364\364\364\364\364\364\364\364\364\364\364\364\364\364\364"
  "\364\364\364\364\364\364\364\364\364\364\364\364\364\364\364\364\364\364"
  "\364\364\364\364\364\364\364\364\364\364\364\364\364\364\364\364\364\364"
  "\364\364\364\364\364\364\364\364\364\364\364\364\364\364\364\364\364\364"
  "\364\364\364\364\364\364\364\364\364\364\364\364\364\364\364\364\364\364"
  "\364\364\364\364\364\364\364\364\364\364\364\364\327\327\367\200\200\377"
  "\200\200\377\330\330\370\365\365\365\365\365\365\365\365\365\365\365\365"
  "\365\365\365\365\365\365\365\365\365\365\365\365\365\365\365\365\365\365"
  "\365\365\365\365\365\365\365\365\365\365\365\365\365\365\365\365\365\365"
  "\365\365\365\365\365\365\365\365\365\365\365\365\365\365\365\365\365\365"
  "\365\365\365\365\365\365\365\365\365\365\365\365\365\365\365\365\365\365"
  "\365\365\365\365\365\365\365\365\365\365\365\365\365\365\365\365\365\365"
  "\365\365\365\365\365\365\365\365\365\365\365\365\365\365\365\365\365\365"
  "\365\365\365\365\365\365\365\365\365\365\365\365\365\365\365\365\365\365"
  "\330\330\370\200\200\377\200\200\377\330\330\370\366\366\366\366\366\366"
  "\366\366\366\366\366\366\366\366\366\366\366\366\366\366\366\366\366\366"
  "\366\366\366\366\366\366\366\366\366\366\366\366\366\366\366\366\366\366"
  "\366\366\366\366\366\366\366\366\366\366\366\366\366\366\366\366\366\366"
  "\366\366\366\366\366\366\366\366\366\366\366\366\366\366\366\366\366\366"
  "\366\366\366\366\366\366\366\366\366\366\366\366\366\366\366\366\366\366"
  "\366\366\366\366\366\366\366\366\366\366\366\366\366\366\366\366\366\366"
  "\366\366\366\366\366\366\366\366\366\366\366\366\366\366\366\366\366\366"
  "\366\366\366\366\366\366\330\330\370\200\200\377\200\200\377\331\331\371"
  "\367\367\367\367\367\367\367\367\367\367\367\367\367\367\367\367\367\367"
  "\367\367\367\367\367\367\367\367\367\367\367\367\367\367\367\367\367\367"
  "\367\367\367\367\367\367\367\367\367\367\367\367\367\367\367\367\367\367"
  "\367\367\367\367\367\367\367\367\367\367\367\367\367\367\367\367\367\367"
  "\367\367\367\367\367\367\367\367\367\367\367\367\367\367\367\367\367\367"
  "\367\367\367\367\367\367\367\367\367\367\367\367\367\367\367\367\367\367"
  "\367\367\367\367\367\367\367\367\367\367\367\367\367\367\367\367\367\367"
  "\367\367\367\367\367\367\367\367\367\367\367\367\331\331\371\200\200\377"
  "\200\200\377\332\332\372\370\370\370\370\370\370\370\370\370\370\370\370"
  "\370\370\370\370\370\370\370\370\370\370\370\370\370\370\370\370\370\370"
  "\370\370\370\370\370\370\370\370\370\370\370\370\370\370\370\370\370\370"
  "\370\370\370\370\370\370\370\370\370\370\370\370\370\370\370\370\370\370"
  "\370\370\370\370\370\370\370\370\370\370\370\370\370\370\370\370\370\370"
  "\370\370\370\370\370\370\370\370\370\370\370\370\370\370\370\370\370\370"
  "\370\370\370\370\370\370\370\370\370\370\370\370\370\370\370\370\370\370"
  "\370\370\370\370\370\370\370\370\370\370\370\370\370\370\370\370\370\370"
  "\332\332\372\200\200\377||\363\323\323\373\371\371\371\371\371\371\371\371"
  "\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371"
  "\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371"
  "\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371"
  "\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371"
  "\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371"
  "\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371"
  "\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371"
  "\371\371\371\371\333\333\373\200\200\377``\270\274\274\375\372\372\372\372"
  "\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372"
  "\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372"
  "\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372"
  "\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372"
  "\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372"
  "\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372"
  "\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372"
  "\372\372\372\372\372\372\372\372\306\306\374ss\333@@\200\234\234\364\372"
  "\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372"
  "\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372"
  "\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372"
  "\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372"
  "\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372"
  "\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372"
  "\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372\372"
  "\372\372\372\372\372\372\372\372\372\372\372\256\256\372SS\241\34\34""8\200"
  "\200\374\341\341\375\374\374\374\374\374\374\374\374\374\374\374\374\374"
  "\374\374\374\374\374\374\374\374\374\374\374\374\374\374\374\374\374\374"
  "\374\374\374\374\374\374\374\374\374\374\374\374\374\374\374\374\374\374"
  "\374\374\374\374\374\374\374\374\374\374\374\374\374\374\374\374\374\374"
  "\374\374\374\374\374\374\374\374\374\374\374\374\374\374\374\374\374\374"
  "\374\374\374\374\374\374\374\374\374\374\374\374\374\374\374\374\374\374"
  "\374\374\374\374\374\374\374\374\374\374\374\374\374\374\374\374\374\374"
  "\374\374\374\374\374\374\374\374\374\374\374\354\354\374\202\202\372((P\0"
  "\0\0LL\225\213\213\366\371\371\375\375\375\375\375\375\375\375\375\375\375"
  "\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375"
  "\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375"
  "\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375"
  "\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375"
  "\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375"
  "\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375"
  "\375\375\375\375\375\375\375\375\373\373\375\230\230\366]]\261\0\0\0\0\0"
  "\0\6\6\14tt\340\217\217\366\345\345\375\375\375\375\375\375\375\375\375\375"
  "\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375"
  "\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375"
  "\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375"
  "\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375"
  "\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375"
  "\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375\375"
  "\375\375\375\355\355\375\230\230\366zz\354\12\12\24\0\0\0\0\0\0\0\0\0\10"
  "\10\20UU\243\200\200\374\256\256\372\310\310\376\336\336\376\336\336\376"
  "\336\336\376\336\336\376\336\336\376\336\336\376\336\336\376\336\336\376"
  "\336\336\376\336\336\376\336\336\376\336\336\376\336\336\376\336\336\376"
  "\336\336\376\336\336\376\336\336\376\336\336\376\336\336\376\336\336\376"
  "\336\336\376\336\336\376\336\336\376\336\336\376\336\336\376\336\336\376"
  "\336\336\376\336\336\376\336\336\376\336\336\376\336\336\376\336\336\376"
  "\336\336\376\336\336\376\336\336\376\336\336\376\310\310\376\260\260\374"
  "\202\202\372]]\261\12\12\24\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0$$HMM\230"
  "qq\327~~\373\200\200\377\200\200\377\200\200\377\200\200\377\200\200\377"
  "\200\200\377\200\200\377\200\200\377\200\200\377\200\200\377\200\200\377"
  "\200\200\377\200\200\377\200\200\377\200\200\377\200\200\377\200\200\377"
  "\200\200\377\200\200\377\200\200\377\200\200\377\200\200\377\200\200\377"
  "\200\200\377\200\200\377\200\200\377\200\200\377\200\200\377\200\200\377"
  "\200\200\377\200\200\377\200\200\377\200\200\377\200\200\377\200\200\377"
  "ss\333SS\241((P\0\0\0\0\0\0\0\0\0\0\0\0";
