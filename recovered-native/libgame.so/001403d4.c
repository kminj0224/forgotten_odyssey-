/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001403d4  Symbol: testFunc */

/* cocos2d::CCFadeOutUpTiles::testFunc(cocos2d::_ccGridSize const&, float) */

void __thiscall
cocos2d::CCFadeOutUpTiles::testFunc(CCFadeOutUpTiles *this,_ccGridSize *param_1,float param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_r2;
  undefined8 uVar3;
  CCPoint aCStack_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  __floatsisf(*(undefined4 *)(this + 0x2c));
  uVar3 = __floatsisf(*(undefined4 *)(this + 0x30));
  CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  __mulsf3(in_r2,local_20);
  uVar3 = __mulsf3(in_r2,local_1c);
  CCPoint::CCPoint(aCStack_28,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  iVar1 = __aeabi_fcmpeq(local_24,0);
  if (iVar1 == 0) {
    uVar2 = __floatsisf(*(undefined4 *)(param_1 + 4));
    uVar3 = __divsf3(uVar2,local_24);
    powf((float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  }
  return;
}


