/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00134b08  Symbol: _INIT_68 */

longlong _INIT_68(float param_1,float param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_00134b54;
  uVar2 = cocos2d::CCPoint::CCPoint((CCPoint *)(DAT_00134b54 + 0x134b14),param_1,param_2);
  uVar2 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0x134b1c),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0x134b24),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2
             ,extraout_s3);
  FUN_001c4bb4(iVar1 + 0x134b34);
  FUN_00201240(iVar1 + 0x134b34,*(undefined4 *)(DAT_00134b58 + 0x134b4a),
               *(undefined4 *)(DAT_00134b5c + 0x134b4c));
  return (ulonglong)param_4 << 0x20;
}


