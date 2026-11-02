/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00133924  Symbol: _INIT_65 */

longlong _INIT_65(float param_1,float param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_00133970;
  uVar2 = cocos2d::CCPoint::CCPoint((CCPoint *)(DAT_00133970 + 0x133930),param_1,param_2);
  uVar2 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0x133938),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0x133940),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2
             ,extraout_s3);
  FUN_001c4bb4(iVar1 + 0x133950);
  FUN_00201240(iVar1 + 0x133950,*(undefined4 *)(DAT_00133974 + 0x133966),
               *(undefined4 *)(DAT_00133978 + 0x133968));
  return (ulonglong)param_4 << 0x20;
}


