/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001404c0  Symbol: testFunc */

/* cocos2d::CCFadeOutTRTiles::testFunc(cocos2d::_ccGridSize const&, float) */

void __thiscall
cocos2d::CCFadeOutTRTiles::testFunc(CCFadeOutTRTiles *this,_ccGridSize *param_1,float param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_r2;
  undefined8 uVar4;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  __floatsisf(*(undefined4 *)(this + 0x2c));
  uVar4 = __floatsisf(*(undefined4 *)(this + 0x30));
  CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  __mulsf3(in_r2,local_20);
  uVar4 = __mulsf3(in_r2,local_1c);
  CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  uVar1 = __addsf3(local_28,local_24);
  iVar2 = __aeabi_fcmpeq(uVar1,0);
  if (iVar2 == 0) {
    uVar3 = __floatsisf(*(int *)param_1 + *(int *)(param_1 + 4));
    uVar4 = __divsf3(uVar3,uVar1);
    powf((float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  }
  return;
}


