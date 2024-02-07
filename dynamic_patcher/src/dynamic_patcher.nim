
import osproc, ptrace, posix, strutils

# const voltage = 1250
# const frequency = 500

var voltagePtr: clong = 0x482A8C
var frequencyPtr: clong = 0x482A6C

# Get bmminer PID
var pidOfBmminer = execCmdEx("pidof -s /usr/bin/bmminer")
doAssert pidOfBmminer.exitCode == 0
var pidOfBmminerOut = pidOfBmminer.output
stripLineEnd(pidOfBmminerOut)
var bmminerPid = Pid(parseInt(pidOfBmminerOut))

attach(bmminerPid)

# var oldVoltage = getData(bmminerPid, voltagePtr)
var oldVoltage = ptrace(PTRACE_PEEKDATA, bmminerPid, voltagePtr, nil)
echo "Old Voltage: ", oldVoltage


var oldFrequency = getData(bmminerPid, frequencyPtr)
echo "Old Frequency: ", oldFrequency

detach(bmminerPid)
