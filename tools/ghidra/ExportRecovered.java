// Ghidra post-script: reference pseudocode, NOT original or buildable C++.
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import java.io.*;
public class ExportRecovered extends GhidraScript {
 public void run() throws Exception {
  File dir = new File(getScriptArgs()[0], currentProgram.getName()); dir.mkdirs();
  DecompInterface dec = new DecompInterface(); dec.openProgram(currentProgram);
  try (PrintWriter index = new PrintWriter(new File(dir,"functions.tsv"),"UTF-8")) {
   index.println("address\tname\tfile\tstatus");
   FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
   while(it.hasNext() && !monitor.isCancelled()) {
    Function f=it.next(); if(f.isExternal() || f.isThunk()) continue;
    String addr=f.getEntryPoint().toString(), filename=addr+".c";
    DecompileResults r=dec.decompileFunction(f,15,monitor);
    boolean ok=r.decompileCompleted();
    try(PrintWriter out=new PrintWriter(new File(dir,filename),"UTF-8")) {
     out.println("/* Decompiled reference only. Not original C/C++; not built into APK. */");
     out.println("/* Address: "+addr+"  Symbol: "+f.getName().replace("*/"," ")+" */");
     out.println(ok ? r.getDecompiledFunction().getC() : "/* Failed: "+r.getErrorMessage().replace("*/"," ")+" */");
    }
    index.println(addr+"\t"+f.getName()+"\t"+filename+"\t"+(ok?"decompiled":"failed"));
   }
  } finally { dec.dispose(); }
 }
}
