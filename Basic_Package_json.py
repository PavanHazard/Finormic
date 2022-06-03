import pip
import json

f=open('Package.json')
d=json.load(f)

for i in d['dependencies']:
    x,y=str(i.keys()),str(i.values())
    k,v=x[x.index('\'')+1:-3],y[y.index('\'')+1:-3]
    k=k+"=="+v
    pip.main(['install',k])

f.close()
