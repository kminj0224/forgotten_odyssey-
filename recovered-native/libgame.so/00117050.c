/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00117050  Symbol: _INIT_48 */

longlong _INIT_48(float param_1,float param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_0011709c;
  uVar2 = cocos2d::CCPoint::CCPoint((CCPoint *)(DAT_0011709c + 0x11705c),param_1,param_2);
  uVar2 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0x117064),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0x11706c),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2
             ,extraout_s3);
  FUN_001c4bb4(iVar1 + 0x11707c);
  FUN_00201240(iVar1 + 0x11707c,*(undefined4 *)(DAT_001170a0 + 0x117092),
               *(undefined4 *)(DAT_001170a4 + 0x117094));
  return (ulonglong)param_4 << 0x20;
}


