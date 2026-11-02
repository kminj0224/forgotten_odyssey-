/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00140440  Symbol: testFunc */

/* cocos2d::CCFadeOutBLTiles::testFunc(cocos2d::_ccGridSize const&, float) */

void __thiscall
cocos2d::CCFadeOutBLTiles::testFunc(CCFadeOutBLTiles *this,_ccGridSize *param_1,float param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_r2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  __floatsisf(*(undefined4 *)(this + 0x2c));
  uVar5 = __floatsisf(*(undefined4 *)(this + 0x30));
  CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
  uVar1 = __subsf3(0x3f800000,in_r2);
  __mulsf3(uVar1,local_20);
  uVar5 = __mulsf3(uVar1,local_1c);
  CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
  iVar4 = *(int *)param_1;
  iVar3 = *(int *)(param_1 + 4);
  if (iVar4 + iVar3 != 0) {
    uVar1 = __addsf3(local_28,local_24);
    uVar2 = __floatsisf(iVar4 + iVar3);
    uVar5 = __divsf3(uVar1,uVar2);
    powf((float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
  }
  return;
}


