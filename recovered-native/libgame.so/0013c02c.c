/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c02c  Symbol: _INIT_78 */

longlong _INIT_78(float param_1,float param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_0013c05c;
  uVar2 = cocos2d::CCPoint::CCPoint((CCPoint *)(DAT_0013c05c + 0x13c038),param_1,param_2);
  uVar2 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0x13c040),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0x13c048),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2
             ,extraout_s3);
  return (ulonglong)param_4 << 0x20;
}


