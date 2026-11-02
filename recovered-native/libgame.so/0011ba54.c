/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011ba54  Symbol: _INIT_52 */

longlong _INIT_52(float param_1,float param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_0011baa0;
  uVar2 = cocos2d::CCPoint::CCPoint((CCPoint *)(DAT_0011baa0 + 0x11ba60),param_1,param_2);
  uVar2 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0x11ba68),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0x11ba70),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2
             ,extraout_s3);
  FUN_001c4bb4(iVar1 + 0x11ba80);
  FUN_00201240(iVar1 + 0x11ba80,*(undefined4 *)(DAT_0011baa4 + 0x11ba96),
               *(undefined4 *)(DAT_0011baa8 + 0x11ba98));
  return (ulonglong)param_4 << 0x20;
}


