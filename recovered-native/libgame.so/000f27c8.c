/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f27c8  Symbol: Hero_Kill_Tartget_Array_Init */

/* Hero_Kill_Tartget_Array_Init(cocos2d::CCLayer*) */

void Hero_Kill_Tartget_Array_Init(CCLayer *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*(int *)param_1 + 0xa8))();
  iVar2 = cocos2d::CCArray::count(*(CCArray **)(*(int *)(iVar1 + 4) + 0x138));
  if (iVar2 != 0) {
    cocos2d::CCArray::count(*(CCArray **)(*(int *)(iVar1 + 4) + 0x138));
    cocos2d::CCArray::removeAllObjects(*(CCArray **)(*(int *)(iVar1 + 4) + 0x138));
  }
  return;
}


