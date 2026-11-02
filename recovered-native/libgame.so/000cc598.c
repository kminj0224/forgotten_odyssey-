/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cc598  Symbol: _INIT_9 */

longlong _INIT_9(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *this;
  undefined8 uVar3;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_000cc5ec;
  this = (undefined4 *)(DAT_000cc5ec + 0xcc5a0);
  iVar2 = DAT_000cc5ec + 0xcc5b0;
  FUN_001c4bb4(iVar2);
  uVar3 = FUN_00201240(iVar2,*(undefined4 *)(DAT_000cc5f0 + 0xcc5b2),
                       *(undefined4 *)(DAT_000cc5f4 + 0xcc5b4));
  uVar3 = cocos2d::CCPoint::CCPoint((CCPoint *)this,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  uVar3 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0xcc5b4),(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0xcc5bc),(float)uVar3,(float)((ulonglong)uVar3 >> 0x20),extraout_s2,
             extraout_s3);
  *(undefined4 *)(iVar1 + 0xcc5a8) = *this;
  *(undefined4 *)(iVar1 + 0xcc5ac) = *(undefined4 *)(iVar1 + 0xcc5a4);
  return (ulonglong)param_2 << 0x20;
}


