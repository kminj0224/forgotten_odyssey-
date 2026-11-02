/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00141970  Symbol: setOpacity */

/* cocos2d::CCAtlasNode::setOpacity(unsigned char) */

void cocos2d::CCAtlasNode::setOpacity(uchar param_1)

{
  int *piVar1;
  undefined in_r1;
  
  piVar1 = (int *)(uint)param_1;
  *(undefined *)(piVar1 + 0x4a) = in_r1;
  if (*(char *)(piVar1 + 0x47) != '\0') {
    (**(code **)(*piVar1 + 0x10c))(piVar1,piVar1 + 0x45);
  }
  return;
}


