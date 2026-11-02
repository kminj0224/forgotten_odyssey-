/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00119058  Symbol: _INIT_49 */

longlong _INIT_49(float param_1,float param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_001190a4;
  uVar2 = cocos2d::CCPoint::CCPoint((CCPoint *)(DAT_001190a4 + 0x119064),param_1,param_2);
  uVar2 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0x11906c),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0x119074),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2
             ,extraout_s3);
  FUN_001c4bb4(iVar1 + 0x119084);
  FUN_00201240(iVar1 + 0x119084,*(undefined4 *)(DAT_001190a8 + 0x11909a),
               *(undefined4 *)(DAT_001190ac + 0x11909c));
  return (ulonglong)param_4 << 0x20;
}


