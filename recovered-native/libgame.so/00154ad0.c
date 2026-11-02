/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00154ad0  Symbol: _INIT_116 */

longlong _INIT_116(float param_1,float param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_00154b00;
  uVar2 = cocos2d::CCPoint::CCPoint((CCPoint *)(DAT_00154b00 + 0x154adc),param_1,param_2);
  uVar2 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0x154ae4),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0x154aec),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2
             ,extraout_s3);
  return (ulonglong)param_4 << 0x20;
}


