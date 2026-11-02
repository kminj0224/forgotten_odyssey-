/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f2770  Symbol: _INIT_34 */

longlong _INIT_34(float param_1,float param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_000f27bc;
  uVar2 = cocos2d::CCPoint::CCPoint((CCPoint *)(DAT_000f27bc + 0xf277c),param_1,param_2);
  uVar2 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0xf2784),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0xf278c),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2,
             extraout_s3);
  FUN_001c4bb4(iVar1 + 0xf279c);
  FUN_00201240(iVar1 + 0xf279c,*(undefined4 *)(DAT_000f27c0 + 0xf27b2),
               *(undefined4 *)(DAT_000f27c4 + 0xf27b4));
  return (ulonglong)param_4 << 0x20;
}


