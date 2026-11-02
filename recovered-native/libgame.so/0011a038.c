/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011a038  Symbol: _INIT_50 */

longlong _INIT_50(float param_1,float param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_0011a084;
  uVar2 = cocos2d::CCPoint::CCPoint((CCPoint *)(DAT_0011a084 + 0x11a044),param_1,param_2);
  uVar2 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0x11a04c),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0x11a054),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2
             ,extraout_s3);
  FUN_001c4bb4(iVar1 + 0x11a064);
  FUN_00201240(iVar1 + 0x11a064,*(undefined4 *)(DAT_0011a088 + 0x11a07a),
               *(undefined4 *)(DAT_0011a08c + 0x11a07c));
  return (ulonglong)param_4 << 0x20;
}


