/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00140364  Symbol: testFunc */

/* cocos2d::CCFadeOutDownTiles::testFunc(cocos2d::_ccGridSize const&, float) */

void __thiscall
cocos2d::CCFadeOutDownTiles::testFunc(CCFadeOutDownTiles *this,_ccGridSize *param_1,float param_2)

{
  undefined4 uVar1;
  undefined4 in_r2;
  undefined8 uVar2;
  CCPoint aCStack_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  __floatsisf(*(undefined4 *)(this + 0x2c));
  uVar2 = __floatsisf(*(undefined4 *)(this + 0x30));
  CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  uVar1 = __subsf3(0x3f800000,in_r2);
  __mulsf3(uVar1,local_20);
  uVar2 = __mulsf3(uVar1,local_1c);
  CCPoint::CCPoint(aCStack_28,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = __floatsisf();
    uVar2 = __divsf3(local_24,uVar1);
    powf((float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  }
  return;
}


