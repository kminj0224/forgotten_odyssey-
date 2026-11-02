/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014a754  Symbol: _INIT_106 */

longlong _INIT_106(float param_1,float param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_0014a784;
  uVar2 = cocos2d::CCPoint::CCPoint((CCPoint *)(DAT_0014a784 + 0x14a760),param_1,param_2);
  uVar2 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0x14a768),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0x14a770),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2
             ,extraout_s3);
  return (ulonglong)param_4 << 0x20;
}


