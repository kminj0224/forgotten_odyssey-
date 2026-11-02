/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015cf4a  Symbol: addObject */

/* cocos2d::CCArray::addObject(cocos2d::CCObject*) */

void cocos2d::CCArray::addObject(CCObject *param_1)

{
  CCObject *in_r1;
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x14);
  FUN_0015cdca(piVar1,1);
  *(CCObject **)(*piVar1 * 4 + piVar1[2]) = in_r1;
  CCObject::retain(in_r1);
  *piVar1 = *piVar1 + 1;
  return;
}


