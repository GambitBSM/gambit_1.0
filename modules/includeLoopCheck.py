import os

IncludeDirs = [
    './Core/include',
    './ModelBit/include',
    './Utils/include',
    './Printers/include',
    './ScannerBit/include',
    './Backends/include',    
    './HEColliderBit/include',    
    './DarkBit/include',    
    './FlavBit/include',    
    './ExampleBit_A/include',    
    './ExampleBit_B/include',    
    './Example_SUSYspecBit/include'
]

def checkLoop(fle, ref, prev):
    global includes    
    if ref in includes[fle]:
        prev2 = prev+[fle,ref]
        return prev2
    for p in prev:
        if p in includes[fle]:
            prev2 = prev+[fle,p]
            return prev2           
    for inc in includes[fle]:
        if inc in includes:
            prev2 = prev+[fle]
            loop = checkLoop(inc,ref, prev2) 
            if loop != None:
                return loop
    return None

files = []
for d in IncludeDirs:
    fs = os.listdir(d)
    for f in fs:
        if '.h' in f:
            files.append([d,f])

includes = {}

for f in files:
    includes[f[1]] = []
    infile = open(f[0]+'/'+f[1])
    inp = infile.read()
    infile.close()
    lines = inp.splitlines() 
    for line in lines:
        if '#include' in line:   
            lineL = line.split()
            for st in lineL:
                if '.h' in st:
                    st2 = st.replace("\"","" ).replace(">","" ).replace("<","" )
                    includes[f[1]].append(st2)

for f in includes:
    prev = []
    loop = checkLoop(f,f,prev)
    if loop != None:
        if loop[0] == loop[-1]:
            print 'Loop found in '+f+':'
            print loop
            print

