/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ff8d8  Symbol: _INIT_38 */

longlong _INIT_38(float param_1,float param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_000ff924;
  uVar2 = cocos2d::CCPoint::CCPoint((CCPoint *)(DAT_000ff924 + 0xff8e4),param_1,param_2);
  uVar2 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0xff8ec),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0xff8f4),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2,
             extraout_s3);
  FUN_001c4bb4(iVar1 + 0xff904);
  FUN_00201240(iVar1 + 0xff904,*(undefined4 *)(DAT_000ff928 + 0xff91a),
               *(undefined4 *)(DAT_000ff92c + 0xff91c));
  return (ulonglong)param_4 << 0x20;
}


