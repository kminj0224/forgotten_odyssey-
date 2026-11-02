/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011bb44  Symbol: _INIT_53 */

longlong _INIT_53(float param_1,float param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_0011bb90;
  uVar2 = cocos2d::CCPoint::CCPoint((CCPoint *)(DAT_0011bb90 + 0x11bb50),param_1,param_2);
  uVar2 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0x11bb58),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0x11bb60),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2
             ,extraout_s3);
  FUN_001c4bb4(iVar1 + 0x11bb70);
  FUN_00201240(iVar1 + 0x11bb70,*(undefined4 *)(DAT_0011bb94 + 0x11bb86),
               *(undefined4 *)(DAT_0011bb98 + 0x11bb88));
  return (ulonglong)param_4 << 0x20;
}


