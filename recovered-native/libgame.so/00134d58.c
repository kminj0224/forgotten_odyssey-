/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00134d58  Symbol: _INIT_69 */

longlong _INIT_69(float param_1,float param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_00134d8c;
  uVar2 = cocos2d::CCPoint::CCPoint((CCPoint *)(DAT_00134d8c + 0x134d98),param_1,param_2);
  uVar2 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0x134da0),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0x134da8),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2
             ,extraout_s3);
  return (ulonglong)param_4 << 0x20;
}


