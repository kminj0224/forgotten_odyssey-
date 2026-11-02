/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c87f8  Symbol: _INIT_3 */

void _INIT_3(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  float extraout_s2;
  float extraout_s3;
  undefined auStack_20 [4];
  undefined auStack_1c [8];
  
  iVar2 = DAT_000c88a4;
  iVar1 = DAT_000c88a0;
  iVar3 = DAT_000c88a0 + 0xc8804;
  FUN_001c4bb4(iVar3);
  iVar2 = iVar2 + 0xc880e;
  uVar6 = *(undefined4 *)(iVar2 + DAT_000c88ac);
  uVar7 = FUN_00201240(iVar3,*(undefined4 *)(iVar2 + DAT_000c88a8),uVar6);
  uVar7 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)(iVar1 + 0xc8808),(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  uVar7 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0xc8810),(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0xc8818),(float)uVar7,(float)((ulonglong)uVar7 >> 0x20),extraout_s2,
             extraout_s3);
  cocos2d::CCSize::CCSize(*(CCSize **)(iVar2 + DAT_000c88b0));
  cocos2d::CCSize::CCSize(*(CCSize **)(iVar2 + DAT_000c88b4));
  cocos2d::CCSize::CCSize(*(CCSize **)(iVar2 + DAT_000c88b8));
  cocos2d::CCSize::CCSize(*(CCSize **)(iVar2 + DAT_000c88bc));
  uVar4 = *(undefined4 *)(iVar2 + DAT_000c88c0);
  FUN_001eed40(uVar4,DAT_000c88c4 + 0xc886e,auStack_20);
  uVar5 = *(undefined4 *)(iVar2 + DAT_000c88c8);
  FUN_00201240(uVar4,uVar5,uVar6);
  uVar4 = *(undefined4 *)(iVar2 + DAT_000c88cc);
  FUN_001eed40(uVar4,DAT_000c88d0 + 0xc888c,auStack_1c);
  FUN_00201240(uVar4,uVar5,uVar6);
  return;
}


