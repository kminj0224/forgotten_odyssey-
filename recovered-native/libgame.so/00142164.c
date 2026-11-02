/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00142164  Symbol: arrayMakeObjectsPerformSelector */

/* cocos2d::CCNode::arrayMakeObjectsPerformSelector(cocos2d::CCArray*, void (cocos2d::CCNode::*)())
    */

CCArray * cocos2d::CCNode::arrayMakeObjectsPerformSelector(CCArray *param_1,_func_void *param_2)

{
  code *in_r2;
  uint in_r3;
  int iVar1;
  CCArray **ppCVar2;
  code *pcVar3;
  CCArray **ppCVar4;
  
  if ((param_2 != (_func_void *)0x0) &&
     (param_1 = (CCArray *)CCArray::count((CCArray *)param_2), param_1 != (CCArray *)0x0)) {
    iVar1 = **(int **)(param_2 + 0x14);
    if (iVar1 != 0) {
      ppCVar4 = (CCArray **)(*(int **)(param_2 + 0x14))[2];
      ppCVar2 = ppCVar4 + iVar1 + -1;
      while (ppCVar4 <= ppCVar2) {
        param_1 = *ppCVar4;
        ppCVar4 = ppCVar4 + 1;
        if (param_1 == (CCArray *)0x0) {
          return (CCArray *)0x0;
        }
        if ((in_r2 != (code *)0x0) || ((in_r3 & 1) != 0)) {
          pcVar3 = in_r2;
          if ((in_r3 & 1) != 0) {
            pcVar3 = *(code **)(in_r2 + *(int *)(param_1 + ((int)in_r3 >> 1)));
          }
          param_1 = (CCArray *)(*pcVar3)(param_1 + ((int)in_r3 >> 1));
        }
      }
    }
  }
  return param_1;
}


