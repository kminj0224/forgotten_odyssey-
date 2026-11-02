/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00145710  Symbol: _INIT_95 */

longlong _INIT_95(float param_1,float param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  CCSize *this;
  undefined8 uVar5;
  float extraout_s2;
  float extraout_s3;
  
  iVar2 = DAT_00145790;
  iVar1 = DAT_0014578c;
  this = (CCSize *)(DAT_00145790 + 0x145720);
  uVar5 = cocos2d::CCPoint::CCPoint((CCPoint *)(DAT_0014578c + 0x145734),param_1,param_2);
  uVar5 = cocos2d::CCSize::CCSize(this,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0x14573c),(float)uVar5,(float)((ulonglong)uVar5 >> 0x20),extraout_s2
             ,extraout_s3);
  cocos2d::CCObject::CCObject((CCObject *)(iVar2 + 0x145728));
  *(int *)(iVar2 + 0x145728) = *(int *)(DAT_00145794 + 0x145756) + 8;
  cocos2d::CCSize::CCSize((CCSize *)((int)&DAT_0014578c + iVar2));
  cocos2d::CCSize::CCSize((CCSize *)((int)&DAT_00145794 + iVar2));
  puVar3 = (undefined4 *)(DAT_0014579c + 0x145774);
  puVar4 = (undefined4 *)(DAT_001457a0 + 0x145776);
  *(int *)(iVar2 + 0x145728) = *(int *)(DAT_00145798 + 0x145770) + 8;
  *(undefined *)(iVar2 + 0x1457b2) = 0;
  FUN_00201240((CCObject *)(iVar2 + 0x145728),*puVar3,*puVar4);
  return (ulonglong)param_4 << 0x20;
}


