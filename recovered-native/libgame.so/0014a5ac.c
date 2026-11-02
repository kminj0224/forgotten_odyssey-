/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014a5ac  Symbol: _INIT_105 */

longlong _INIT_105(float param_1,float param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_0014a5dc;
  uVar2 = cocos2d::CCPoint::CCPoint((CCPoint *)(DAT_0014a5dc + 0x14a5b8),param_1,param_2);
  uVar2 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0x14a5c0),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0x14a5c8),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2
             ,extraout_s3);
  return (ulonglong)param_4 << 0x20;
}


