/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00120ca8  Symbol: _INIT_56 */

longlong _INIT_56(float param_1,float param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_00120cf4;
  uVar2 = cocos2d::CCPoint::CCPoint((CCPoint *)(DAT_00120cf4 + 0x120cb4),param_1,param_2);
  uVar2 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0x120cbc),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0x120cc4),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2
             ,extraout_s3);
  FUN_001c4bb4(iVar1 + 0x120cd4);
  FUN_00201240(iVar1 + 0x120cd4,*(undefined4 *)(DAT_00120cf8 + 0x120cea),
               *(undefined4 *)(DAT_00120cfc + 0x120cec));
  return (ulonglong)param_4 << 0x20;
}


