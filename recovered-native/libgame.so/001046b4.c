/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001046b4  Symbol: _INIT_40 */

longlong _INIT_40(float param_1,float param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_00104700;
  uVar2 = cocos2d::CCPoint::CCPoint((CCPoint *)(DAT_00104700 + 0x1046c0),param_1,param_2);
  uVar2 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0x1046c8),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0x1046d0),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2
             ,extraout_s3);
  FUN_001c4bb4(iVar1 + 0x1046e0);
  FUN_00201240(iVar1 + 0x1046e0,*(undefined4 *)(DAT_00104704 + 0x1046f6),
               *(undefined4 *)(DAT_00104708 + 0x1046f8));
  return (ulonglong)param_4 << 0x20;
}


