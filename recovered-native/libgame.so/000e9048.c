/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e9048  Symbol: update */

/* KG_RandomBox::update(float) */

float KG_RandomBox::update(float param_1)

{
  KG_RandomBox *in_r0;
  
  if (*(int *)(in_r0 + 0x110) == 1) {
    param_1 = (float)Box_Opening(in_r0);
  }
  return param_1;
}


