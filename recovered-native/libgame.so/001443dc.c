/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001443dc  Symbol: _INIT_91 */

longlong _INIT_91(float param_1,float param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_0014440c;
  uVar2 = cocos2d::CCPoint::CCPoint((CCPoint *)(DAT_0014440c + 0x1443ec),param_1,param_2);
  uVar2 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0x1443f4),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0x1443fc),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2
             ,extraout_s3);
  return (ulonglong)param_4 << 0x20;
}


