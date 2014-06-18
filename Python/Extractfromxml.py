from xml.sax.handler import ContentHandler
from xml.sax import make_parser
from glob import glob
import xml.sax
import sys
class textHandler(ContentHandler):
     def characters(self, ch):
        sys.stdout.write(ch)
parser = xml.sax.make_parser()
handler = textHandler()
parser.setContentHandler(handler)
parser.parse("test.xml")
