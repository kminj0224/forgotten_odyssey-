/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015e3e0  Symbol: _INIT_142 */

longlong _INIT_142(float param_1,float param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_0015e410;
  uVar2 = cocos2d::CCPoint::CCPoint((CCPoint *)(DAT_0015e410 + 0x15e3ec),param_1,param_2);
  uVar2 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0x15e3f4),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0x15e3fc),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2
             ,extraout_s3);
  return (ulonglong)param_4 << 0x20;
}


