/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00208064  Symbol: FUN_00208064 */

longlong FUN_00208064(int *param_1,undefined4 param_2,uint param_3,int param_4,int param_5)

{
  __off_t _Var1;
  
  if (((int)(param_4 - (uint)(param_3 < 0x80000000)) < 0 !=
       (SBORROW4(param_4,(uint)(param_3 < 0x80000000)) != false)) &&
     ((int)(param_4 - ((param_3 < 0x80000000) - 1)) < 0 ==
      (SBORROW4(param_4,-1) != SBORROW4(param_4 + 1,(uint)(param_3 < 0x80000000))))) {
    _Var1 = lseek((int)*(short *)(*param_1 + 0xe),param_3,param_5);
    return (longlong)_Var1;
  }
  return -1;
}


