/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cc090  Symbol: _INIT_8 */

longlong _INIT_8(float param_1,float param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 *this;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_000cc0e4;
  this = (undefined4 *)(DAT_000cc0e4 + 0xcc09c);
  uVar2 = cocos2d::CCPoint::CCPoint((CCPoint *)this,param_1,param_2);
  uVar2 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0xcc0a4),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0xcc0ac),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2,
             extraout_s3);
  FUN_001c4bb4(iVar1 + 0xcc0bc);
  FUN_00201240(iVar1 + 0xcc0bc,*(undefined4 *)(DAT_000cc0e8 + 0xcc0d2),
               *(undefined4 *)(DAT_000cc0ec + 0xcc0d4));
  *(undefined4 *)(iVar1 + 0xcc0c0) = *this;
  *(undefined4 *)(iVar1 + 0xcc0c4) = *(undefined4 *)(iVar1 + 0xcc0a0);
  return (ulonglong)param_4 << 0x20;
}


